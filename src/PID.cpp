#include "PID.h"
#include <iostream>

using namespace std;

/*
* the PID class.
*/

PID::PID() {}

PID::~PID() {}

double cte_prev = 0;
double int_cte = 0;
double cte_diff = 0;


void PID::Init(double Kp_in, double Ki_in, double Kd_in) {
    Kp = Kp_in;
    Ki = Ki_in;
    Kd = Kd_in;
}

void PID::UpdateError(double cte) {
    cte_diff = cte - cte_prev;
    cte_prev = cte;
    int_cte += cte; // add current local cte to the int cte which is set to 0.
}

double PID::TotalError() {
    double steer = -Kp*cte_prev-Kd*cte_diff-Ki*int_cte;
    return steer;
}

it only adjustes the steering angle, but not thrrott

double  Kp_in = 0.1945    ;
double  Ki_in = 0.000001  ;
double  Kd_in = 3.5   ;

Large Kp, large osilation

it didn't use twiddle, so the car won't be able to drive fast
it ossilate on smooth road


Kp-  The proportional gain coefficient. It controls the output with response to the error. 
increase in value of P increased the magnitude of the oscillation
Image link: http://www.machinedesign.com/sites/machinedesign.com/files/uploads/2016/01/2PropSpotFixer.jpg

Integral factor -cumulative measured error
is there systematic bias to add?


derivative term flattening the error trajectory into a horizontal line
derivative corrects present error versus error the last time it was checked
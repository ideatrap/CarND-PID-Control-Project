In the PID controller implementation, the model tries to adjust the steering angle based on the cross track error (CTE) provided from the simulator. However, it doesn't change the throttle.

The optimal Kp, Ki, Kd is obtained by trial and error, and the final numbers are set as Kp_in = 0.1945, Ki_in = 0.000001, Kd_in = 3.5.

Kp is the the proportional gain coefficient. It controls the output with response to the error. The images gives a good summary of different Kp setting. Image - http://www.machinedesign.com/sites/machinedesign.com/files/uploads/2016/01/2PropSpotFixer.jpg

Ki is the integral factor. It tracks the cumulative sum of error values. Based on experiment, the system doesn't exhibits systematic bias. Hence, Ki is set at a nominal value.

Kd is derivative term. It tries to counteract the overshoot caused by P and I, and flatten the error trajectory into a horizontal line. Image - http://www.machinedesign.com/sites/machinedesign.com/files/uploads/2016/01/4Derivative.jpg
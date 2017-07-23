In the PID controller implementation, the model tries to adjust the steering angle based on the cross track error (CTE) provided from the simulator. However, it doesn't change the throttle.

The optimal Kp, Ki, Kd is obtained by trial and error, and the final numbers are set as Kp_in = 0.1945, Ki_in = 0.000001, Kd_in = 3.5.

Kp is the the proportional gain coefficient. It controls the output with response to the error. The images gives a good summary of different Kp setting. (image)[http://www.machinedesign.com/sites/machinedesign.com/files/uploads/2016/01/2PropSpotFixer.jpg]

Large Kp, large osilation


Kp-    
Increase in value of P increased the magnitude of the oscillation
Image link: http://www.machinedesign.com/sites/machinedesign.com/files/uploads/2016/01/2PropSpotFixer.jpg

Integral factor -cumulative measured error
is there systematic bias to add?


derivative term flattening the error trajectory into a horizontal line
derivative corrects present error versus error the last time it was checked
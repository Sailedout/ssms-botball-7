#include <kipr/wombat.h>

int main()
{
    create_connect();//connects to create
    wait_for_light(0);//lets you callabrate the light and use it
    shut_down_in(119);// turns off the robots in 2 minutes no matter what
                        
    
    
    
    
    create_drive_direct(-200,-200);// drives backward
    msleep(4500);// tells how long to wait
    create_drive_direct(150,-150);// takes a right at 150 miliseconds
    msleep(1000);
    create_drive_direct(200,200);// drives forward
    msleep(2000);                          
    
      enable_servos();// starts the servos 
    
    set_servo_position(1,895);//sets servo in port 1 to 895
 
    set_servo_position(0,1748);// sets servo in port 0 to 1748

    
    
    create_drive_direct(200,200);
    msleep(3000);
    create_drive_direct(0,0);// stops create
    msleep(1000);
    
    
    set_servo_position(0,748);
    msleep(3000);
    
    create_drive_direct(-150,-150);// makes create drive backward
    msleep(1000);
    create_drive_direct(150,-150);// makes right turn
    msleep(1000);
    create_drive_direct(150,-150);// i did 2 for a 180 turn
    msleep(1000);
    create_drive_direct(0,0);
    msleep(1000);
    
    
    motor(0,200);// makes motor in port 0 move at 200 speed
    msleep(3000);
    motor(0,0);// stops motor
    msleep(4000);
    motor(0,-200);// returns motor back to original state
    msleep(3000);
    
    
    
    create_drive_direct(-200,200);// left turn
    msleep(1000);
    create_drive_direct(200,200);
    msleep(3000);
    create_drive_direct(150,-150);
    msleep(1000);
    create_drive_direct(200,200);
    msleep(4000);
    set_servo_position(0,1748)
    ;msleep(3000);
    
    ;disable_servos();// disables servos
    create_stop(); // create will stop
    create_disconnect();// disconnects the create
    return 0;
}
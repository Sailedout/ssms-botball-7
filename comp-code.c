#include <kipr/wombat.h>

int main()
{
    create_connect(); //connects to create
    wait_for_light(0); // lets you callabrate the light
    shut_down_in(119); //shuts down in 2 minutes
     enable_servos();  // starts the servos                  
    
    
  
    
    create_drive_direct(-200,-200); // drives backword
    msleep(4500);// tells how long to drive
    create_drive_direct(200,-200); // 90 degree turn could also use 150 -150
    msleep(1000);
    create_drive_direct(200,200);// drives forward
    msleep(1000);                          
    
    set_servo_position(1,895);// moves servo in port 1 to 895
    
    set_servo_position(0,1748);//opens arm
    
    
    create_drive_direct(100,100);
    msleep(3000);
    
    set_servo_position(0,748);
    
    
    create_drive_direct(-150,-150);
    msleep(1000);
    create_drive_direct(150,-150);
    msleep(1000);
    create_drive_direct(150,-150);
    msleep(1000);
    
    motor(0,200);
    msleep(3000);
    motor(0,-200);
    msleep(3000);
    
    create_drive_direct(-200,200);
    msleep(1000);
    create_drive_direct(200,200);
    msleep(3000);
    create_drive_direct(150,-150);
    msleep(1000);
    create_drive_direct(200,200);
    msleep(4000);
    set_servo_position(0,1748);
    msleep(3000);
    
    
    
    
    
    
    
    disable_servos();
    create_stop();
    create_disconnect();
    return 0;
}

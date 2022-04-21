#include <kipr/wombat.h>

int main()
{
   create_connect();
    
   wait_for_light(0);
   shut_down_in(119);
   
   create_drive_direct(-200,-200);
    
   msleep(3120);
   
   create_stop();
    
   create_drive_direct(100,-100);
       
   msleep(1345);
    
   create_stop();
    
   msleep(1100); 	//waiting an rhett
    
   enable_servos();
    
   set_servo_position(0,1820);
   msleep(500);
       
   set_servo_position(2,2047);
   msleep(500);
       
   disable_servos();
    
   create_drive_direct(200,200);
    
   msleep(3480);
       
   create_stop();
    
   enable_servos();
    
   set_servo_position(2,1130);
   msleep(500);
       
   disable_servos();
    
   create_drive_direct(-200,-200);
   
   msleep(3500);
    
   create_drive_direct(100,-100);
    
   msleep(1300);
    
   create_drive_direct(200,200);
    
   msleep(5000);
    
   enable_servos();
    
   set_servo_position(0,1640);
   msleep(500);
    
    set_servo_position(2,1730);
   msleep(500);
    
   create_drive_direct(-100,-100);
    
   msleep(1200);
    
   set_servo_position(2,1140);
   msleep(500);  
    
   set_servo_position(0,1560);
   msleep(500);
    
   create_drive_direct(100,100);
    
   msleep(1200);
    
   disable_servos();
    
   create_disconnect();
   return 0;    
}

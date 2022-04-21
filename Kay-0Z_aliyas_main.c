#include <kipr/wombat.h>

int main()
{
    create_connect(); //connects to create
    
    //wait_for_light(0); // lets you callabrate the light
    
    //shut_down_in(119); //shuts down in 2 minutes
                      
    enable_servos();  // starts the servos
  
    set_servo_position(1,999);// lifts arm
    
    set_servo_position(0,900);//opens claw
    
    
    //Go get Botguy
    create_drive_direct(-200,-200); // drives backward
    msleep(4100);// tells how long to drive
    
    create_drive_direct(185,-185); //right turn toword botguy
    msleep(950);
    
    create_drive_direct(200,200);// drives forword toword botguy
    msleep(3200); 
    
    create_drive_direct(0,0);//stop motors
    msleep(1000);
     
    set_servo_position(0,1650);// closes claw on botguy 
      
    create_drive_direct(0,0);// stops motors
    msleep(1000);
    
    create_drive_direct(-200,-200);// drives backward
    msleep(1000); 
    
    
    //Go to lift PCR Machine Gate to release tennis balls and pickle ball
    create_drive_direct(150,-150);// turns left to get lift toward the gate
    msleep(2500);  

    create_drive_direct(-200,-200);// drives backword to lift gate
    msleep(2000);

    create_drive_direct(0,0);// drives forward
    msleep(2000);
    
    motor(0,200);  //lifts gate up
    msleep(3000);
    
    motor(0,0);  //stops and holds gate up to release balls
    msleep(2000);
    
    motor(0,-200);  //lift goes down
    msleep(3000);
    
    motor(0,0);  //lift stops
    msleep(1000);
   
    
    //Take Botguy to Airlock
    create_drive_direct(200,200);// drives forward
    msleep(4000);
    
    create_drive_direct(-150,150);// turns right towards airlock
    msleep(1000);

    create_drive_direct(200,200);// drives forward
    msleep(4000);
    
    set_servo_position(0,900);//opens claw
    
    create_drive_direct(-200,-200);// drives backwards away from airlock
    msleep(4000);
    
    //Go to get red cube to place on airlock
    create_drive_direct(-150,150);// turns left towards red cube
    msleep(2000);
    
    create_drive_direct(200,200);// drives forward towards red cube
    msleep(4000);
    
    create_drive_direct(0,0);// stops driving
    msleep(4000);
    
    set_servo_position(1,2047);  //arm goes down to grab red cube
    
    set_servo_position(0,1789);  //claw closes on red cube
    
    create_drive_direct(-200,-200);// drives backward
    msleep(4000);
    
    create_drive_direct(150,-150);// turns right towards airlock
    msleep(2000);
        
    set_servo_position(1,925);// lifts arm
    
    create_drive_direct(200,200);// drives forward to airlock
    msleep(4000);
    
    create_drive_direct(0,0);// stops driving
    msleep(4000);
    
    set_servo_position(0,900);//opens claw to place red cube on airlock with botguy....SORTED ON AIRLOCK!!
    
    
    
     
    disable_servos();
    create_stop();
    create_disconnect();
    return 0;
}
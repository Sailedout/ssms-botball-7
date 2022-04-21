#include <kipr/wombat.h>

int main()
{
    enable_servos();
    int base_arm_down = 1385;
    int base_arm_up = 507;
    int high_arm_straight = 1020;
    int high_arm_right = 1470;
    int base_arm = 0;
    int high_arm = 1;
    int claw = 2;
    int right_wheel = 0;
    int left_wheel = 1;
    int claw_open = -100;
    int claw_close = 100;
    int claw_time = 3500;
    
    motor(right_wheel,-100);
    motor(left_wheel,-100);
    msleep(1000);
    motor(right_wheel,0);
    motor(left_wheel,0);
    msleep(1000);
    //go backwards
    set_servo_position(base_arm,base_arm_up);
    set_servo_position(high_arm,high_arm_right);
    msleep(500);
    //base arm and high arm in position
    //wait_for_light(0);
    shut_down_in(119);
    //start
    set_servo_position(base_arm,base_arm_up);
    set_servo_position(high_arm,high_arm_straight);
    msleep(500);
    //base arm and high arm good
    motor(right_wheel,0);
    motor(left_wheel,0);
    msleep(2000);
    //wait for roomba to get out of the way
    motor(right_wheel,100);
    motor(left_wheel,100);
    msleep(2000);
    //push rack-a-stack to the end of the feild
    motor(claw,claw_open);
    msleep(claw_time);
    //open claw
    motor(right_wheel,-100);
    motor(left_wheel,-100);
    msleep(1500);
    motor(right_wheel,0);
    motor(left_wheel,0);
    msleep(750);
    //go backwards
    set_servo_position(base_arm, base_arm_down);
    set_servo_position(high_arm,high_arm_straight);
    msleep(1000);
    //get arm ready to pick up rack-a-stack
    motor(right_wheel,100);
    motor(left_wheel,100);
    msleep(1000);
    motor(right_wheel,0);
    motor(left_wheel,0);
    msleep(1000);
    //go forward to rack-a-stack 
    motor(claw,claw_close);
    msleep(claw_time);
    //close claw on rack-a-stack 
    set_servo_position(base_arm,base_arm_up);
    msleep(500);
    //pick up rack-a-stack
    set_servo_position(high_arm,high_arm_right);
    msleep(500);
    //turn rack-a-stack sideways
    motor(right_wheel,100);
    motor(left_wheel,25);
    msleep(750);
    //turn with rack-a-stack
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
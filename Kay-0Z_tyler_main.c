#include <kipr/wombat.h>

int main()
{
    //wait_for_light(0);
    shut_down_in(119);
    motor(0,0);
    motor(1,0);
    msleep(1500);
     motor(0,100);
    motor(1,100);
    msleep(1500);
    motor(2,-100);
    msleep(3500);
    motor(2,0);
    printf("1stcode");
    enable_servos();
    set_servo_position(1,1018);
    msleep(1000);
    motor(0,-100);
    motor(1,-100);
    msleep(1500);
    motor(0,0);
    motor(1,0);
    set_servo_position(0,1466);
    msleep(1000);
    motor(0,100);
    motor(1,100);
    msleep(1500);
    motor(2,100);
    msleep(3500);
    set_servo_position(0,578);
    set_servo_position(1,1746);
    msleep(300);
    disable_servos();
    return 0;
}

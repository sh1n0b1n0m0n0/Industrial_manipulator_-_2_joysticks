#include <Servo.h> 
int VRx_joy_1 = A0;
int serv_pin_1 = 11;
int xPosition_joy_1 = 0;
int angle = 5;
int initial_position1 = 90;
Servo servo1;

void setup() 
{
    pinMode(VRx_joy_1, INPUT);
    servo1.attach(serv_pin_1);
}

void loop() 
{
    xPosition_joy_1 = analogRead(VRx_joy_1);
    servo1.write(81); //stop
    if (xPosition_joy_1 < 300)
    {
        servo1.write(81); servo1.write(105); delay(100); servo1.write(81);
    }
    if (xPosition_joy_1 > 600)
    {
        servo1.write(81); servo1.write(55); delay(100); servo1.write(81);
    }

}

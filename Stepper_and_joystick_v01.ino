#include <Servo.h> 
//-------------------------------------------------------------------------------------------------------------------
//Initial 3 joysticks to analog pins on Arduino UNO R3
//-------------------------------------------------------------------------------------------------------------------
int VRx_joy_1 = A0;
int VRy_joy_1 = A1;
//int VRx_joy_2 = A2;
//int VRy_joy_2 = A3;
int VRx_joy_3 = A4;
int VRy_joy_3 = A5;

int xPosition_joy_1 = 0;
int yPosition_joy_1 = 0;
//int xPosition_joy_2 = 0;
//int yPosition_joy_2 = 0;
int xPosition_joy_3 = 0;
int yPosition_joy_3 = 0;

int angle = 10;

int initial_position1 = 90;
int initial_position2 = 90;
//int initial_position3 = 90;
//int initial_position4 = 90;
int initial_position5 = 90;
int initial_position6 = 90;

Servo servo1;
Servo servo2;
//Servo servo3;
//Servo servo4;
Servo servo5;
Servo servo6;
//-------------------------------------------------------------------------------------------------------------------


void setup() 
{ 
  pinMode(VRx_joy_1, INPUT);
  pinMode(VRy_joy_1, INPUT);
 //pinMode(VRx_joy_2, INPUT);
 //pinMode(VRy_joy_2, INPUT);
  pinMode(VRx_joy_3, INPUT);
  pinMode(VRy_joy_3, INPUT);
  
  servo1.attach(3);
  servo2.attach(5);
  //servo3.attach(6);
  //servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop()
{
  xPosition_joy_1 = analogRead(VRx_joy_1);
  yPosition_joy_1 = analogRead(VRy_joy_1);

  //xPosition_joy_2 = analogRead(VRx_joy_2);
  //yPosition_joy_2 = analogRead(VRy_joy_2);

  xPosition_joy_3 = analogRead(VRx_joy_3);
  yPosition_joy_3 = analogRead(VRy_joy_3);
//-------------------------------------------------------------------------------------------------------------------
//1'st joystick and 2 serv 1,2
//-------------------------------------------------------------------------------------------------------------------
  servo1.write(83); //stop
    if (xPosition_joy_1 < 300)
    {
        servo1.write(83); servo1.write(95); delay(100); servo1.write(83);
    }
    if (xPosition_joy_1 > 600)
    {
        servo1.write(83); servo1.write(65); delay(100); servo1.write(83);
    }


  if (yPosition_joy_1 < 300)
  {
    if (initial_position2 < 0){}   
    else{initial_position2 = initial_position2 - angle; servo2.write(initial_position2); delay(100);}
  }
  if (yPosition_joy_1 > 600)
  {
     if (initial_position2 > 180){}  
     else{initial_position2 = initial_position2 + angle; servo2.write(initial_position2); delay(100);}
  }
//-------------------------------------------------------------------------------------------------------------------
//2'nd joystick and 2 serv 3,4
//-------------------------------------------------------------------------------------------------------------------
/*  if (xPosition_joy_2 < 300)
  {
    if (initial_position3 < 0){}   
    else{initial_position3 = initial_position3 - angle; servo3.write(initial_position3); delay(500);}
  }
  if (xPosition_joy_2 > 600)
  {
    if (initial_position3 > 180){}  
    else{initial_position3 = initial_position3 + angle; servo3.write(initial_position3); delay(500);}
  }
  if (yPosition_joy_2 < 300)
  {
    if (initial_position4 < 0){}  
    else{initial_position4 = initial_position4 - angle; servo4.write(initial_position4); delay(500);}
  }
  if (yPosition_joy_2 > 600)
  {
    if (initial_position4 > 180){}  
    else{initial_position4 = initial_position4 + angle; servo4.write(initial_position4); delay(500);}
  }*/
//-------------------------------------------------------------------------------------------------------------------
//3'rd joystick and 2 serv 5,6
//-------------------------------------------------------------------------------------------------------------------
  if (xPosition_joy_3 < 300)
  {
    if (initial_position5 < 0){}   
    else{initial_position5 = initial_position5 - angle; servo5.write(initial_position5); delay(100);}
  }
  if (xPosition_joy_3 > 600)
  {
    if (initial_position5 > 180){}  
    else{initial_position5 = initial_position5 + angle; servo5.write(initial_position5); delay(100);}
  }
  if (yPosition_joy_3 < 300)
  {
    if (initial_position6 < 0){}   
    else{initial_position6 = initial_position6 - angle; servo6.write(initial_position6); delay(100);}
  }
  if (yPosition_joy_3 > 600)
  {  
    if (initial_position6 > 180){}  
    else{initial_position6 = initial_position6 + angle; servo6.write(initial_position6); delay(100);}
  }
}

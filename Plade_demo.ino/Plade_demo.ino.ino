int pladeH = A0;
int pladeV = A1;
int ledPin = 13;
int sensorValue = 0;
int movement = 1;
const int LED_1 = 3; 
const int LED_2 = 4;
const int LED_3 = 5;
const int LED_4 = 6;
const int LED_5 = 7;
int leds[2][4]={{5,1,0},{5,1,0}};
//1. plads er plasering 2. plads er movement 3. plads er cooldown

int func = 0;
int bx = 0;
int by = 0;
int py = 0;
#include <Wire.h>

void setup() {
  Wire.begin(2); 
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);

}

void loop() {
  
  sensorValue = analogRead(pladeH);
  set_movementH();
  leds[0][1] = movement;

  sensorValue = analogRead(pladeV);
  set_movementV();
  leds[1][1] = movement;

  
  movement_();

  taend_led_1();
  taend_led_2();
  Serial.println(sensorValue);
}



void receiveEvent(int howMany) {
  int len = Wire.available();
  while (len-1 < Wire.available()){
    func = Wire.read();
  }
  if (func == 1){
    while (1 < Wire.available()){
      bx = Wire.read();
    }
    by = Wire.read();
  }

  if (bx == 11){
    sammenlign_h();
  }
  else if (bx == 1){
    sammenlign_v();
  }
}

int col = 0;

void sammenlign_h(){
  py = leds[1][0];
  Serial.println(by);
  Serial.println(py);
  if (py+1 == by){
    col = 1;
  }
  else if (py == by){
    col = 2;
  }
  else if ( py+2 == by){
    col = 3;
  }
}

void sammenlign_v(){
  py = leds[0][0];
  Serial.println(by);
  Serial.println(py);
  if (py+1 == by){
    col = 1;
  }
  else if (py == by){
    col = 2;
  }
  else if ( py+2 == by){
    col = 3;
  }
}

void set_movementH(){
  if (sensorValue > 315 && sensorValue < 345){
    movement = 1;
  }
  else if (sensorValue < 315){
    movement = 0;
  }
  else if (sensorValue > 345){
    movement = 2;
  }
}

void set_movementV(){
  if (sensorValue > 320 && sensorValue < 360){
    movement = 1;
  }
  else if (sensorValue < 320){
    movement = 0;
  }
  else if (sensorValue > 360){
    movement = 2;
  }
}

void movement_(){
  
  for (int i = 0; i < 2; i++){
    if (leds[i][1] == 1){
      leds[i][2] = 0;
    }
    else if (leds[i][1] == 0){
      if (leds[i][2] < 1){
        leds[i][0] = leds[i][0]-1;
        if (leds[i][0] < 1){
          leds[i][0] = 1;
          leds[i][2] = 0;
        }
        leds[i][2] = 10;
      }
      else{
        leds[i][2] = leds[i][2]-1;
      }
    }
    else if (leds[i][1] == 2){
      if (leds[i][2] < 1){
        leds[i][0] = leds[i][0]+1;
        if (leds[i][0] > 8){
          leds[i][0] = 8;
          leds[i][2] = 0;
        }
        leds[i][2] = 10;
      }
      else{
        leds[i][2] = leds[i][2]-1;
      }
    }
  }
}

void taend_led_1(){
  //tænder for LED'erne til den 1. plade
  for (int i = 0; i <= 1; i++){
    if (leds[0][0]==8){
      LED18();
      delay(1);
      LED19();
      delay(1);
      LED110();
      delay(1);
    }
    else if (leds[0][0]==7){
      LED17();
      delay(1);
      LED18();
      delay(1);
      LED19();
      delay(1);
    }
    else if (leds[0][0]==6){
      LED16();
      delay(1);
      LED17();
      delay(1);
      LED18();
      delay(1);
    }
    else if (leds[0][0]==5){
      LED15();
      delay(1);
      LED16();
      delay(1);
      LED17();
      delay(1);
    }
    else if (leds[0][0]==4){
      LED14();
      delay(1);
      LED15();
      delay(1);
      LED16();
      delay(1);
    }
    else if (leds[0][0]==3){
      LED13();
      delay(1);
      LED14();
      delay(1);
      LED15();
      delay(1);
    }
    else if (leds[0][0]==2){
      LED12();
      delay(1);
      LED13();
      delay(1);
      LED14();
      delay(1);
    }
    else if (leds[0][0]==1){
      LED11();
      delay(1);
      LED12();
      delay(1);
      LED13();
      delay(1);
    }
  }
}

void taend_led_2(){
    //tænder for LED'erne til den 2. plade
  for (int i = 0; i <= 3; i++){
    if (leds[1][0]==8){
      LED28();
      delay(1);
      LED29();
      delay(1);
      LED210();
      delay(1);
    }
    else if (leds[1][0]==7){
      LED27();
      delay(1);
      LED28();
      delay(1);
      LED29();
      delay(1);
    }
    else if (leds[1][0]==6){
      LED26();
      delay(1);
      LED27();
      delay(1);
      LED28();
      delay(1);
    }
    else if (leds[1][0]==5){
      LED25();
      delay(1);
      LED26();
      delay(1);
      LED27();
      delay(1);
    }
    else if (leds[1][0]==4){
      LED24();
      delay(1);
      LED25();
      delay(1);
      LED26();
      delay(1);
    }
    else if (leds[1][0]==3){
      LED23();
      delay(1);
      LED24();
      delay(1);
      LED25();
      delay(1);
    }
    else if (leds[1][0]==2){
      LED22();
      delay(1);
      LED23();
      delay(1);
      LED24();
      delay(1);
    }
    else if (leds[1][0]==1){
      LED21();
      delay(1);
      LED22();
      delay(1);
      LED23();
      delay(1);
    }
  }
}

void LED11(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED12(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED13(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, HIGH);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED14(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED15(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, HIGH);
}
void LED16(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED17(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED18(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, HIGH);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED19(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED110(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, HIGH);
}
void LED21(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED22(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED23(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, HIGH);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED24(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED25(){
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, HIGH);
}
void LED26(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED27(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED28(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, HIGH);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED29(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
  pinMode(LED_5, INPUT);      //row 4
  digitalWrite(LED_5, LOW);
}
void LED210(){
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  pinMode(LED_5, OUTPUT);      //row 4
  digitalWrite(LED_5, HIGH);
}


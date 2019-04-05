int potentiometer = A0;
int potentiometer2 = A1;
int ledPin = 13;
int sensorValue = 0;
int movement = 1;
const int LED_1 = 3; 
const int LED_2 = 4;
const int LED_3 = 5;
const int LED_4 = 6;
const int LED_5 = 7;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  sensorValue = analogRead(potentiometer);
  set_movement_accelerometer();
  taend_led_1();

  sensorValue = analogRead(potentiometer2);
  set_movement_potentiometer();
  taend_led_2();

  Serial.println(sensorValue);
}

void set_movement_accelerometer(){
  //Movement = intervaller defineres
  if (sensorValue>352){
    movement = 8;
  }
  else if (sensorValue<352 && sensorValue>345){
    movement = 7;
  }
  else if (sensorValue<345 && sensorValue>336){
    movement = 6;
  }
  else if (sensorValue<336 && sensorValue>327){
    movement = 5;
  }
  else if (sensorValue<327 && sensorValue>318){
    movement = 4;
  }
  else if (sensorValue<318 && sensorValue>309){
    movement = 3;
  }
  else if (sensorValue<309 && sensorValue>300){
    movement = 2;
  }
  else if (sensorValue<300){
    movement = 1;
  }
  return movement;
}


void set_movement_potentiometer(){
  //Movement = intervaller defineres
  if (sensorValue>800){
    movement = 8;
  }
  else if (sensorValue<800 && sensorValue>700){
    movement = 7;
  }
  else if (sensorValue<700 && sensorValue>600){
    movement = 6;
  }
  else if (sensorValue<600 && sensorValue>500){
    movement = 5;
  }
  else if (sensorValue<500 && sensorValue>400){
    movement = 4;
  }
  else if (sensorValue<400 && sensorValue>300){
    movement = 3;
  }
  else if (sensorValue<300 && sensorValue>200){
    movement = 2;
  }
  else if (sensorValue<200){
    movement = 1;
  }
  return movement;
}

void taend_led_1(){
  //tænder for LED'erne til den 1. plade
  for (int i = 0; i <= 1; i++){
    if (movement==8){
      LED18();
      delay(1);
      LED19();
      delay(1);
      LED110();
      delay(1);
    }
    else if (movement==7){
      LED17();
      delay(1);
      LED18();
      delay(1);
      LED19();
      delay(1);
    }
    else if (movement==6){
      LED16();
      delay(1);
      LED17();
      delay(1);
      LED18();
      delay(1);
    }
    else if (movement==5){
      LED15();
      delay(1);
      LED16();
      delay(1);
      LED17();
      delay(1);
    }
    else if (movement==4){
      LED14();
      delay(1);
      LED15();
      delay(1);
      LED16();
      delay(1);
    }
    else if (movement==3){
      LED13();
      delay(1);
      LED14();
      delay(1);
      LED15();
      delay(1);
    }
    else if (movement==2){
      LED12();
      delay(1);
      LED13();
      delay(1);
      LED14();
      delay(1);
    }
    else if (movement==1){
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
    if (movement==8){
      LED28();
      delay(1);
      LED29();
      delay(1);
      LED210();
      delay(1);
    }
    else if (movement==7){
      LED27();
      delay(1);
      LED28();
      delay(1);
      LED29();
      delay(1);
    }
    else if (movement==6){
      LED26();
      delay(1);
      LED27();
      delay(1);
      LED28();
      delay(1);
    }
    else if (movement==5){
      LED25();
      delay(1);
      LED26();
      delay(1);
      LED27();
      delay(1);
    }
    else if (movement==4){
      LED24();
      delay(1);
      LED25();
      delay(1);
      LED26();
      delay(1);
    }
    else if (movement==3){
      LED23();
      delay(1);
      LED24();
      delay(1);
      LED25();
      delay(1);
    }
    else if (movement==2){
      LED22();
      delay(1);
      LED23();
      delay(1);
      LED24();
      delay(1);
    }
    else if (movement==1){
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


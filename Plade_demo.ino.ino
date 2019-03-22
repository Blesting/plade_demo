int potentiometer = A0;
int potentiometer2 = A1;
int ledPin = 13;
int sensorValue = 0;
int movement = 1;
const int LED_1 = 3; 
const int LED_2 = 4;
const int LED_3 = 5;
const int LED_4 = 6;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  sensorValue = analogRead(potentiometer);
  set_movement();
  taend_led_1();

  sensorValue = analogRead(potentiometer2);
  set_movement();
  taend_led_2();

  Serial.println(sensorValue);
}

void set_movement(){
  //Movement = intervaller defineres
  if (sensorValue<360 && sensorValue>350){
    movement = 5;
  }
  else if (sensorValue<350 && sensorValue>340){
    movement = 4;
  }
  else if (sensorValue<340 && sensorValue>320){
    movement = 3;
  }
  else if (sensorValue<320 && sensorValue>310){
    movement = 2;
  }
  else if (sensorValue<310){
    movement = 1;
  }
  return movement;
}

void taend_led_1(){
  //Movement checkes og tænder LED
  for (int i = 0; i <= 3; i++){
    if (movement==5){
      LED15();
      delay(1);
      LED16();
      delay(1);
    }
    else if (movement==4){
      LED14();
      delay(1);
      LED15();
      delay(1);
    }
    else if (movement==3){
      LED13();
      delay(1);
      LED14();
      delay(1);
    }
    else if (movement==2){
      LED12();
      delay(1);
      LED13();
      delay(1);
    }
    else if (movement==1){
      LED11();
      delay(1);
      LED12();
      delay(1);
    }
  }
}

void taend_led_2(){
  //Movement checkes og tænder LED
  for (int i = 0; i <= 3; i++){
    if (movement==5){
      LED25();
      delay(1);
      LED26();
      delay(1);
    }
    else if (movement==4){
      LED24();
      delay(1);
      LED25();
      delay(1);
    }
    else if (movement==3){
      LED23();
      delay(1);
      LED24();
      delay(1);
    }
    else if (movement==2){
      LED22();
      delay(1);
      LED23();
      delay(1);
    }
    else if (movement==1){
      LED21();
      delay(1);
      LED22();
      delay(1);
    }
  }
}

void LED11()
{
  //turn on LED L2
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, OUTPUT);      //row 3
  digitalWrite(LED_3, LOW);  
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  }

void LED12()
{
  //turn on LED L5
  pinMode(LED_1, INPUT);    //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);
  pinMode(LED_3, OUTPUT);    //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  }

void LED13()
{  
  //turn on LED L6
  pinMode(LED_1, INPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);      //row3
  digitalWrite(LED_3, HIGH);
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  }
  
void LED14()
{  
  //turn on LED L1
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);  
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
}

void LED15()
{
  //turn on LED L4
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);    //row 2
  digitalWrite(LED_2, HIGH);  
  pinMode(LED_3, INPUT);    //row 3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  }

void LED16()
{  
  //turn on LED L6
  pinMode(LED_1, OUTPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);      //row3
  digitalWrite(LED_3, HIGH);
  pinMode(LED_4, INPUT);      //row 4
  digitalWrite(LED_4, LOW);
  }

void LED21(){  
  //turn on LED L6
  pinMode(LED_1, OUTPUT);     //row1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, INPUT);      //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
}

void LED22(){  
  //turn on LED L6
  pinMode(LED_1, INPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);      //row2
  digitalWrite(LED_2, HIGH);
  pinMode(LED_3, INPUT);      //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
}

void LED23(){  
  //turn on LED L6
  pinMode(LED_1, INPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);      //row3
  digitalWrite(LED_3, HIGH);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, LOW);
}

void LED24(){  
  //turn on LED L6
  pinMode(LED_1, OUTPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, INPUT);      //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
}

void LED25(){  
  //turn on LED L6
  pinMode(LED_1, INPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, INPUT);      //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
}

void LED26(){  
  //turn on LED L6
  pinMode(LED_1, INPUT);     //row1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);      //row2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);      //row3
  digitalWrite(LED_3, LOW);
  pinMode(LED_4, OUTPUT);      //row 4
  digitalWrite(LED_4, HIGH);
}

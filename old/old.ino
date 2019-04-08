void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

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

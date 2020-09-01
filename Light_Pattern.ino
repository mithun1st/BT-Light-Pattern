/*
 * green = 22
 * red = 23
 * blue = 24
 * green = 25
 * red = 26
 * blue = 27
 */

#include<LiquidCrystal.h>

LiquidCrystal lcd(40,42,44,46,48,50);

int c=0;
void setup() {
  
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(A7,INPUT);
  Serial.begin(9600);
  Serial3.begin(9600);
  lcd.begin(16,2);
}


void loop() {

  lcd.setCursor(1,0);
  lcd.print("Mahadi Hassan");
  
  lcd.setCursor(4,1);
  lcd.print("MITHUN");

  
  String inp="";
  while(Serial3.available()){
    c=0;
    inp+=(char)Serial3.read();
    delay(5);
  }
  int d=100;
  
  Serial.println(c);
//  Serial.println(inp);
//  Serial.println(digitalRead(A7));

  if(!Serial3.available() && digitalRead(A7)){
    delay(200);
    c++;
    if(c==6){
      c=0;  
    }
  }
    
   while(inp=="1" || c==1){    
    digitalWrite(22, 1);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(24, 1);
    delay(d);
    digitalWrite(25, 1);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(27, 1);
    delay(d);
  
  
    digitalWrite(22, 0);
    delay(d);
    digitalWrite(23, 0);
    delay(d);
    digitalWrite(24, 0);
    delay(d);
    digitalWrite(25, 0);
    delay(d);
    digitalWrite(26, 0);
    delay(d);
    digitalWrite(27, 0);
    delay(d);
        if(Serial3.available() || digitalRead(A7)){
      break;
    }
    digitalWrite(27, 1);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(25, 1);
    delay(d);
    digitalWrite(24, 1);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(22, 1);
    delay(d);
 
    digitalWrite(27, 0);
    delay(d);
    digitalWrite(26, 0);
    delay(d);
    digitalWrite(25, 0);
    delay(d);
    digitalWrite(24, 0);
    delay(d);
    digitalWrite(23, 0);
    delay(d);
    digitalWrite(22, 0);
    delay(d);

    if(Serial3.available()|| digitalRead(A7)){
      break;
    }
  } 



   while(inp=="5" || c==5){    

    digitalWrite(27, 1);
    digitalWrite(26, 1);
    digitalWrite(25, 1);
    digitalWrite(24, 1);
    digitalWrite(23, 1);
    digitalWrite(22, 1);
    delay(d*5);
    if(Serial3.available()|| digitalRead(A7)){
      break;
    }
    digitalWrite(27, 0);
    digitalWrite(26, 0);
    digitalWrite(25, 0);
    digitalWrite(24, 0);
    digitalWrite(23, 0);
    digitalWrite(22, 0);
    delay(d*5);
    if(Serial3.available() || digitalRead(A7)){
      break;
    }
  }


   while(inp=="3" || c==3){   
    d=150;
    digitalWrite(22, 1);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(24, 1);
    delay(d);
    digitalWrite(25, 1);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(27, 1);
    delay(d);
      if(Serial3.available() || digitalRead(A7)){
      break;
    }
  
    digitalWrite(22, 0);
    digitalWrite(23, 0);
    digitalWrite(24, 0);
    digitalWrite(25, 0);
    digitalWrite(26, 0);
    digitalWrite(27, 0);
    delay(400);
    
    digitalWrite(27, 1);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(25, 1);
    delay(d);
    digitalWrite(24, 1);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(22, 1);
    delay(d);
 
    digitalWrite(27, 0);
    digitalWrite(26, 0);
    digitalWrite(25, 0);
    digitalWrite(24, 0);
    digitalWrite(23, 0);
    digitalWrite(22, 0);
    delay(400);

    if(Serial3.available() || digitalRead(A7)){
      break;
    }
  }


   while(inp=="4" || c==4){   
    d=120; 
    digitalWrite(27, 1);
    delay(d);
    digitalWrite(27,0);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(26,0);
    delay(d);
    digitalWrite(25,1);
    delay(d);
    digitalWrite(25, 0);
    delay(d);
    digitalWrite(24,1);
    delay(d);
    digitalWrite(24, 0);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(23,0);
    delay(d);
    digitalWrite(22,1);
    delay(d);
    digitalWrite(22, 0);
    delay(d);
        if(Serial3.available() || digitalRead(A7)){
      break;
    }
    ////
    digitalWrite(22, 1);
    delay(d);
    digitalWrite(22,0);
    delay(d);
    digitalWrite(23, 1);
    delay(d);
    digitalWrite(23,0);
    delay(d);
    digitalWrite(24,1);
    delay(d);
    digitalWrite(24, 0);
    delay(d);
    digitalWrite(25,1);
    delay(d);
    digitalWrite(25, 0);
    delay(d);
    digitalWrite(26, 1);
    delay(d);
    digitalWrite(26,0);
    delay(d);
    digitalWrite(27,1);
    delay(d);
    digitalWrite(27, 0);
    delay(d);
    

    if(Serial3.available() || digitalRead(A7)){
      break;
    }
  }

  while(inp=="2" || c==2){   
    d=250; 
    digitalWrite(22,1);
    digitalWrite(25,1);
    delay(d);
    digitalWrite(22,0);
    digitalWrite(25,0);
    delay(d);

     if(Serial3.available() || digitalRead(A7)){
      break;
    }

    digitalWrite(24,1);
    digitalWrite(27,1);
    delay(d);
    digitalWrite(24,0);
    digitalWrite(27,0);
    delay(d);

  
     
     if(Serial3.available() || digitalRead(A7)){
      break;
    }

  
    digitalWrite(23,1);
    digitalWrite(26,1);
    delay(d);
    digitalWrite(23,0);
    digitalWrite(26,0);
    delay(d);

    
     if(Serial3.available() || digitalRead(A7)){
      break;
    }
  }

    digitalWrite(27, 0);
    digitalWrite(26, 0);
    digitalWrite(25, 0);
    digitalWrite(24, 0);
    digitalWrite(23, 0);
    digitalWrite(22, 0);

  
    
}

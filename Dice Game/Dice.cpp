/*
 * This program simulates a die by generating a random number between
  * 1-6. The electronic die can
 * be used with some board games that require a  die to play. 
 * A touch sensor is interfaced with arduino, and on every touch,
  * a random number between 1-6 is generated and 
 * displayed on a 7-segment LED.
  * This program is made by Shreyas for 
 * Electronics Champ YouTube Channel.
  * Please subscribe to this channel
 * Thank You
 */

int seg_a = 11;
int  seg_b = 10;
int seg_c = 9;
int seg_d = 8;
int seg_e = 7;
int seg_f =  6;
int seg_g = 5;
int sensor = 3;
int i = 0;                                  //initialise  the variables

void setup() {
//segments a-g are the individual segments  in the 7-segment display 
  pinMode(seg_a,OUTPUT); 
  pinMode(seg_b,OUTPUT);
  pinMode(seg_c,OUTPUT);
  pinMode(seg_d,OUTPUT);
  pinMode(seg_e,OUTPUT);
  pinMode(seg_f,OUTPUT);
  pinMode(seg_g,OUTPUT);
  
  while(digitalRead(sensor)  == LOW){
    pattern();    //function to display a pattern on the 7-segment LED
  }
  
  randomSeed(analogRead(A0));    //Read from unconnected analog pin  A0  

}

void loop() {

  if(digitalRead(sensor) == HIGH){        //If  the sensor is touched

    i = random(1, 7);     //Chooses a random number  between 1 and 6
    for(int pat=0; pat<=2;pat++){
      pattern();
    }
    
    sevenSeg();
  
  }

}

void sevenSeg(){
//lights  up the corresponding LED segments in the 7-segment LED display
 
  if(i ==  1){
   digitalWrite(seg_a,HIGH);
   digitalWrite(seg_b,LOW);
   digitalWrite(seg_c,LOW);
   digitalWrite(seg_d,HIGH);
   digitalWrite(seg_e,HIGH);
   digitalWrite(seg_f,HIGH);
   digitalWrite(seg_g,HIGH);
   delay(20);                               //Digit  1
  }
  else if(i == 2){
   digitalWrite(seg_a,LOW);
   digitalWrite(seg_b,LOW);
   digitalWrite(seg_c,HIGH);
   digitalWrite(seg_d,LOW);
   digitalWrite(seg_e,LOW);
   digitalWrite(seg_f,HIGH);
   digitalWrite(seg_g,LOW);
   delay(20);                               //Digit  2
  } 
  else if(i == 3){
   digitalWrite(seg_a,LOW);
   digitalWrite(seg_b,LOW);
   digitalWrite(seg_c,LOW);
   digitalWrite(seg_d,LOW);
   digitalWrite(seg_e,HIGH);
   digitalWrite(seg_f,HIGH);
   digitalWrite(seg_g,LOW);
   delay(20);                               //Digit  3
  }  
  else if(i == 4){
   digitalWrite(seg_a,HIGH);
   digitalWrite(seg_b,LOW);
   digitalWrite(seg_c,LOW);
   digitalWrite(seg_d,HIGH);
   digitalWrite(seg_e,HIGH);
   digitalWrite(seg_f,LOW);
   digitalWrite(seg_g,LOW);
   delay(20);                               //Digit  4
  }
  else if(i == 5){
   digitalWrite(seg_a,LOW);
   digitalWrite(seg_b,HIGH);
   digitalWrite(seg_c,LOW);
   digitalWrite(seg_d,LOW);
   digitalWrite(seg_e,HIGH);
   digitalWrite(seg_f,LOW);
   digitalWrite(seg_g,LOW);
   delay(20);                               //Digit  5
  }
  else if(i == 6){
   digitalWrite(seg_a,LOW);
   digitalWrite(seg_b,HIGH);
   digitalWrite(seg_c,LOW);
   digitalWrite(seg_d,LOW);
   digitalWrite(seg_e,LOW);
   digitalWrite(seg_f,LOW);
   digitalWrite(seg_g,LOW);
   delay(20);                               //Digit  6
  }
}

void pattern(){                 //This displays a moving pattern

  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  delay(100);
  
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  delay(100);

  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  delay(100);

  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  delay(100);

  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  delay(100);

  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,HIGH);
  delay(100);
}

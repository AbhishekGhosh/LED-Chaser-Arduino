int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int ledPin5 = 6;
int ledPin6 = 7;
int ledPin7 = 8;
int ledPin8 = 9;
int ledPin9 = 10;
int ledPin10 = 11;
int ledPin11 = 12;
int ledPin12 = 13;
 
void setup() {
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin8, OUTPUT);
    pinMode(ledPin9, OUTPUT);
    pinMode(ledPin10, OUTPUT);
    pinMode(ledPin11, OUTPUT);
    pinMode(ledPin12, OUTPUT);
}

void loop() {
 
     // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin1, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin1, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
  
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin2, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin2, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
  
  
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin3, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin3, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin4, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin4, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
  
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin5, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin5, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin6, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin6, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
  
  
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin7, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin7, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin8, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin8, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
   
     // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin9, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin9, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin10, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin10, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
  
  
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin11, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin11, ledVal);
         delay(0);
     } 
     
     // Pause for 0/1000 second 
  delay(0);
       // Fade in
    for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin12, ledVal);
         delay(0);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin12, ledVal);
         delay(0);
     } 
     
     // Pause for 500/1000 second 
  delay(500);

}



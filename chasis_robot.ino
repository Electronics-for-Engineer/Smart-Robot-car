//Welcome to E for Engineer
//L293D
//Motor A
const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
//Motor B
const int motorPin3  = 9; // Pin  7 of L293
const int motorPin4  = 10;  // Pin  2 of L293

//This will run only one time.
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    
    //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4

}

void loop(){
    //This code  will turn Motor A & B forward  for 3 sec.
    
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(3000); 

    //This code will turn Motor B clockwise for 1 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(1000); 

    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(3000); 

    //This code will turn Motor B clockwise for 2 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(1000); 

    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(3000); 

    //This code will turn Motor B clockwise for 2 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(1000); 
    

     digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(3000); 

    //This code will turn Motor B clockwise for 1 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(1000); 
    
}

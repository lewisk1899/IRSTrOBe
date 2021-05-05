#include <SoftwareSerial.h>

// Define the data transmit/receive pins in Arduino

#define TxD 2

#define RxD 4

SoftwareSerial mySerial(RxD, TxD); // RX, TX for Bluetooth
char c;// get the next character from the bluetooth serial port
int state;
int flag;
void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  mySerial.begin(9600); // For Bluetooth
  Serial.begin(9600); // For the IDE monitor Tools -> Serial Monitor
  digitalWrite(3, HIGH);
}

void loop() {
  boolean isValidInput; 
  do 
  { 
    Serial.println(flag);
    if(flag == 1){
      while ( !mySerial.available() ) ; // LOOP...
    }
    
    c = mySerial.read(); // Execute the option based on the character recieved
    Serial.print(c); // Print the character received to the IDE serial monitor
    if(c == 'a')
    {
      state = 0;
    }
    else if(c == 'b')
    {
      state = 1;
    }
    else if(c == 'c')
    {
      state = 2;
    }
    switch (state) 
    {
      case 0: // turn on mosfet (continuous wave)
        //Serial.println("case0");
        digitalWrite(13, HIGH);
        isValidInput = true;
        flag = 0;
        break;
      case 1: // turn on mosfet (pwm)
        //Serial.println("case1");
        while(1)
        {
          flag = 1;
          digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(100);              // wait for a second, delay is in ms
          digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
          delay(100);
          c = mySerial.read();
          if(c == 'a')
          {
            //Serial.println("c==a");
            state = 0;
            break;
          }
          else if(c == 'c')
          {
            //Serial.println("c==c");
            state = 2;
            break;
          }
        }
  
      case 2: // turn off LED
        flag = 0;
        //Serial.println("case2");
        digitalWrite(13, LOW);
        isValidInput = true;
        break;
    default:
      // Do the code you need when any other character is received or when nothing is received
      //mySerial.println( "Please enter 'a', 'b', or 'c' " );
      isValidInput = false;
      break;
    
    }
  
  } while ( isValidInput == true ); // Repeat the loop

}

#include <SoftwareSerial.h>

#define RED 3         //Rgb diode pins.
#define GREEN 5
#define BLUE 6
//#define COMMON_CATHODE  //Undef if you have rgb diode with common cathode 

//#define BTpin 2       //HC-05 state pin.
SoftwareSerial BT(10, 11); //HC 5RX, 6TX

byte dataBuffer[4] = {0, 0, 0, 0};          //Byte data buffer init.

void setColor(int red, int green, int blue) //Color setup function.
{
  //red = 255 - red;
  //green = 255 - green;
  //blue = 255 - blue;
  
  analogWrite(RED, red);
  analogWrite(GREEN, green);
  analogWrite(BLUE, blue);
}

void btConnected() {
  Serial.println("Bluetooth connected.");     //Interrupt for bluetooth connected state.
}

void btDisconnected() {
  Serial.println("Bluetooth disconnected.");  //Interrupt for bluetooth disconnected state.
}

void setup() {                              //Outputs and interrupts setup.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);

//  attachInterrupt(digitalPinToInterrupt(2), btConnected, RISING);
//  attachInterrupt(digitalPinToInterrupt(2), btDisconnected, FALLING);
  Serial.begin(9600);
  BT.begin(9600);
  Serial.print("Serial Port Initialized");
  //Serial communication init.
}

void loop() {
  interrupts();

  if (BT.available()) {
    Serial.println("Bluetooth Available");
    //Serial.readBytes(dataBuffer, 4);
    BT.readBytes(dataBuffer, 4);

    if (dataBuffer[3] == 0) {                                            //Buffer triggering.
      setColor((int)dataBuffer[0], (int)dataBuffer[1], (int)dataBuffer[2]); //Setting rgb diode color. Red, green and blue values are in range 0-255.
      Serial.print("R: ");                                                 //Serial data print.
      Serial.print((int)dataBuffer[0]);
      Serial.print(" G: ");
      Serial.print((int)dataBuffer[1]);
      Serial.print(" B: ");
      Serial.print((int)dataBuffer[2]);
      Serial.print("\n");
    }

    dataBuffer[0] = 0;                                                   //Cleaning buffer
    dataBuffer[1] = 0;
    dataBuffer[2] = 0;
    dataBuffer[3] = 1;
  }
}



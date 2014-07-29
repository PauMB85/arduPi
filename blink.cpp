/**************************************
* Author: PauMB                       *
* Program: turn off & turn on a led   *
* Created: 07/28/14                   *
* Company: HedaSoft                   *
**************************************/

//Include arduPi library
#include "arduPi.h"

//Needed for Serial communication
SerialPi Serial;
 
//Needed for accesing GPIO (pinMode, digitalWrite, digitalRead, i2C functions)
WirePi Wire;
 
//Needed for SPI
SPIPi SPI;
/*********************************************************
 *  IF YOUR ARDUINO CODE HAS OTHER FUNCTIONS APART FROM  *
 *  setup() AND loop() YOU MUST DECLARE THEM HERE        *
 * *******************************************************/

/**************************
 * YOUR ARDUINO CODE HERE *
 * ************************/

int led = 9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  fprintf(stdout,"ON\n");
  delay(5000);               // wait for 5 seconds
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  fprintf(stdout,"OFF\n");
  delay(5000);               // wait for 5 seconds
}

int main (){
        setup();
        while(1){
                loop();
        }
        return (0);
}

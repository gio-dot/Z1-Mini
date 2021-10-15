/*
	060420 MODIFIED BY https://github.com/Gio-dot
	ADDED WIEGAND PROTOCOL READING ON SERIAL PINS 2 (D0) AND PIN 3 (D1)
	READING OUT CODE ON UART RX/TX PINS
*/

#include <Arduino.h>

#include <Wiegand.h>	// GIO WIEGAND
WIEGAND wg;	// GIO WIEGAND

#define DEBUG // remove debug so pin 0 and 1 can be used for IO

unsigned long durata_codice= 0;	// durata codice Wiegand (passato un certo tempo invio codice vuoto sulla seriale)
int flag_durata_codice= 0;      // flag per cancellare wiegand una volta sola

const int Out1 = 7;
const int Out2 = 8;
const int In1 = 5;
const int In2 = 6;
// const int In3 = 5;
// const int In4 = 6;
// const int In1rd;
// const int In2rd;
// const int In3rd;
// const int In4rd;
// int flag1off= 1;
// int flag1on= 1;
// int flag2off= 1;
// int flag2on= 1;
// int flag3off= 1;
// int flag3on= 1;
// int flag4off= 1;
// int flag4on= 1;

char ch;

void setup()
{
#ifdef DEBUG
  Serial.begin(115200);
  Serial.println(F("Init "));
#endif
	
	// default Wiegand Pin 2 and Pin 3 see image on README.md
	// for non UNO board, use wg.begin(pinD0, pinD1) where pinD0 and pinD1 
	// are the pins connected to D0 and D1 of wiegand reader respectively.
	wg.begin();	// WIEGAND

	pinMode(Out1, OUTPUT);
	pinMode(Out2, OUTPUT);
	pinMode(In1, INPUT_PULLUP);
	pinMode(In2, INPUT_PULLUP);

#ifdef DEBUG
  Serial.println(F("Wire ok"));
#endif
}

void loop()
{
  if(wg.available())
		{
			// Serial.print("Wiegand HEX = ");
			// Serial.print(wg.getCode(),HEX);
			// Serial.print(", DECIMAL = ");
			Serial.println(wg.getCode());	// WIEGAND
			// Serial.print(", Type W");
			// Serial.println(wg.getWiegandType()); 
			durata_codice= millis();  // azzero il tempo per invio caodice vuoto Wiegand
			flag_durata_codice= 1; // flag per wiegand vuoto 1 volta sola		
		}
	
	if ( ( (millis()-durata_codice)>=2000)&&(flag_durata_codice== 1) )
		{
				Serial.println(0);	 // dopo 2 secondi dalla lettura invio codice wiegand vuoto per essere pronto a letture successive
				flag_durata_codice= 0;
		}	

	int In1rd = digitalRead(In1);		// leggo lo stato dei 2 ingressi...
	int In2rd = digitalRead(In2);
	
	if (Serial.available() > 0)
		{
			ch = Serial.read();
			// Serial.println (ch);	// 	sE DECOMMENTO MI DA L'ECHO SUL TERMINALE
		}	

	if ( (ch == '1')or(In2rd== 0) )
		{
			ch= 0;	// azzero ch altrimenti blocca SEMPRE ACCESO
			digitalWrite(Out1, HIGH);
			delay(500);
			digitalWrite(Out1, LOW);
		}
			// {
			// 	digitalWrite(Out1, LOW);
			// }
			// if (ch == '1')
			// {
			// 	digitalWrite(Out1, LOW);
			// }
			// else if (ch == '2')
			// {
			// 	digitalWrite(Out1, HIGH);
			// }
			// else if (ch == '3')
			// {
			// 	digitalWrite(Out2, LOW);
			// }
			// else if (ch == '4')
			// {
			// 	digitalWrite(Out2, HIGH);
			// }
		// }			

}



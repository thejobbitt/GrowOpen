// GrowOpen Water System
// v0.1

#include <TimeLib.h>

//-DEBUG MODE?-------------------------------------
#define DEBUG

//-GLOBAL VARIABLES--------------------------------
const uint8_t SOAK_TIME = 24;
uint8_t TIMER;

//-OUTPUT PINS-------------------------------------
const uint8_t WATER_INLET_SOLENOID = 1;
const uint8_t WATER_TRANS_SOLENOID = 2;
const uint8_t MIXER_1 = 3;
const uint8_t MIXER_2 = 4;

//-INPUT PINS--------------------------------------
const uint8_t VAT_1_TOP = 5;
const uint8_t VAT_1_BOT = 6;
const uint8_t VAT_2_TOP = 7;
const uint8_t VAT_2_BOT = 8;

void setup(){

	Serial.begin(115200);

	//-OUTPUT SETUP--------------------------------	
	pinMode(WATER_INLET_SOLENOID, OUTPUT); 			// high side switch?
	pinMode(WATER_TRANS_SOLENOID, OUTPUT);			// high side switch?

	//-INPUT SETUP---------------------------------
	pinMode(VAT_1_TOP, INPUT_PULLUP);
	pinMode(VAT_1_BOT, INPUT_PULLUP);
	pinMode(VAT_2_TOP, INPUT_PULLUP);
	pinMode(VAT_2_BOT, INPUT_PULLUP);
}

void loop(){

	if(VAT_1_BOT == LOW && digitalRead(WATER_TRANS_SOLENOID) == LOW;){
		digitalWrite(WATER_INLET_SOLENOID, HIGH);
	}
	if(VAT_1_TOP == LOW){
		digitalWrite(WATER_INLET_SOLENOID, HIGH);
		TIMER = hour()+SOAK_TIME;
	}
	if(TIMER == hour()){
		//add nutrients
		//mix nutrients
		digitalWrite(WATER_TRANS_SOLENOID, HIGH);
	}
	if(VAT_1_BOT == HIGH && VAT_2_TOP == LOW){
		digitalWrite(WATER_TRANS_SOLENOID, LOW);
	}
}





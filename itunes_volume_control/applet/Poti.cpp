#include "WProgram.h"
void setup();
void loop();
int poti_pin = 0;
int poti_val = 0;
char balken[255];

void setup() {  
  Serial.begin(9600);
}

void loop() {
  poti_val = analogRead(poti_pin);

  Serial.println(poti_val);
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}


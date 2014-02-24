//Sample analog Read 
//Setup for Potentiometer but could be used for any analogRead()

//Setup Loop
void setup()
{

	Serial.begin(9600);  //Setup Serial for output	

}


//main loop

void loop()
{

//Read analog A0 and spit out the value to serial output

int sensorValue = analogRead(A0);

Serial.println(sensorValue);
delay(1);


}

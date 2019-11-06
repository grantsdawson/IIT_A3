#include <SoftwareSerial.h>
 
SoftwareSerial ESP8266(19, 18);  //RX,TX
 
void setup()
{
    Serial.begin(9600);     
 
    // Start the software serial for communication with the ESP8266
    ESP8266.begin(9600);  //this assumes default baud rate is used by the module
 
    Serial.println("");
    Serial.println("Ready"); 
}
 
void loop()
{
    Serial.println(“Establishing connection type…”);
    ESP8266.println(“AT+CIPMUX=1”);
    delay(1000);
    Serial.println(“Setting WiFI mode…”);
    ESP8266.println(“AT+CWMODE=3”);
    delay(1000);
    Serial.println(“Connecting to WiFi”);
    ESP8266.println("Aussie Broadband 0183","Qoyibezona"); //insert your own SSID and password here
    delay(1000);
    
     
}

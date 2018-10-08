#include <Adafruit_CircuitPlayground.h>

void setup() 
{
    CircuitPlayground.begin();
}
void loop() 
{
    if(CircuitPlayground.rightButton())
    {  
        FancyLights();
    }
}

void FancyLights()
{
    CircuitPlayground.setPixelColor(1, 200, 100, 200);
    delay(500);
    CircuitPlayground.setPixelColor(1, 100, 200, 100);
    delay(500);
    CircuitPlayground.setPixelColor(1, 0, 0, 0);
    delay(500);
}

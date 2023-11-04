#include <FastLED.h>

#define LED_PIN     5 // Define the data pin for your WS2811 LEDs
#define NUM_LEDS    100 // Define the total number of LEDs in your strip
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(100); // You can adjust the brightness as needed
}

void loop() {

  // Light the first 18 LEDs (20-37) red
  for (int i = 20; i < 38; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000); // Wait for 2 seconds

  // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause

  // Light the next 22 LEDs (40-62) green
  for (int i = 40; i < 63; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();
  delay(1000); // Wait for 2 seconds

  // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause


  // Light the next 9 LEDs (70-79) red
  for (int i = 70; i < 80; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000); // Wait for 2 seconds

  // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause


  // Light the next 6 LEDs (88-94) green
  for (int i = 88; i < 95; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();
  delay(1000); // Wait for 2 seconds

  // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause


  // Light the next 2 LEDs (97-99) red
  for (int i = 97; i < 100; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000); // Wait for 2 seconds

  // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause

//--------------------------------------------------------------------
  //All turn on
  // Light the first 17 LEDs (20-37) red
  for (int i = 20; i < 38; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();

  // Light the next 22 LEDs (40-62) green
  for (int i = 40; i < 63; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();


  // Light the next 9 LEDs (70-79) green
  for (int i = 70; i < 80; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();


  // Light the next 6 LEDs (88-94) green
  for (int i = 88; i < 95; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();


  // Light the next 2 LEDs (97-99) red
  for (int i = 97; i < 100; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  
  delay(1500);
   // Turn off all the LEDs
  fill_solid(leds, 100, CRGB::Black);
  FastLED.show();
  delay(500); // Wait for a short pause

}

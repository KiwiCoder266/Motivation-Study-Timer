#include <Wire.h>
#include <Adafruit_GFX.h>
#include <DIYables_OLED_SSD1309.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

DIYables_OLED_SSD1309 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // put your setup code here, to run once:
  if (!oled.begin(SSD1309_SWITCHAPVCC, 0x3c)) {
    Serial.println(F("SSD1309 allocation failed"));
    while (true);
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1309_PIXEL_ON);
}

void loop() {
  display.setTextSize(4);
  display.println(F(""))
}

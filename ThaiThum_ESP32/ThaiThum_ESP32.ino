//  ___________.__           ._____________.__                   
//  \__    ___/|  |__ _____  |__\__    ___/|  |__  __ __  _____  
//    |    |   |  |  \\__  \ |  | |    |   |  |  \|  |  \/     \ 
//    |    |   |   Y  \/ __ \|  | |    |   |   Y  \  |  /  Y Y  \
//    |____|   |___|  (______/__| |____|   |___|__/____/|__|_|  /
//                  \/  Dev By Yanapat Nikomrak 
//                      Version 1.0 (ESP32) Powered By Blynk
//                      Reserved to S.K. SmartFarm & Garden Co.,Ltd

//#define BLYNK_TEMPLATE_ID           "TMPLxxxxxx"
//#define BLYNK_DEVICE_NAME           "Device"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7

#include "BlynkEdgent.h"

void setup()
{
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}

// freeMacro firmware v0.5
// Dominik Kuzniarz 2025

#include "config.h"
#include "Keyboard.h"
#define LEDOUT 10
#define KEYIN 8

long lastKeyTime = 0;
long currentKeyTime = 0;

void animation(){
  for(uint8_t i = 0; i < 16; i++){
    uint8_t select = i << 4;
    PORTF = select;
    uint8_t brt;
    for(brt = 0; brt < 255; brt++){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(50);
    }
    for(brt = 255; brt > 0; brt--){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(500);
    }
  }
}

void bankFlash(uint8_t sel){
  uint8_t select = sel << 4;
  PORTF = select;
  for(uint8_t i = 0; i < 7; i++){
    uint8_t brt;
    for(brt = 0; brt < 255; brt++){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(400);
    }
    for(brt = 255; brt > 0; brt--){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(400);
    }
  }
}

void bankFlashOS(uint8_t sel){
  uint8_t select = sel << 4;
  PORTF = select;
  for(uint8_t i = 0; i < 5; i++){
    uint8_t brt;
    for(brt = 0; brt < 255; brt++){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(2000);
    }
    for(brt = 255; brt > 0; brt--){
      analogWrite(LEDOUT, brt);
      delayMicroseconds(10);
    }
  }
}

void bankSelectFeedback(uint8_t bank){
  switch(bank){
    case 0x00: bankFlash(0x00); break;
    case 0x01: bankFlash(0x01); break;
    case 0x02: bankFlash(0x02); break;
    case 0x03: bankFlash(0x03); break;
    case 0x04: bankFlash(0x04); break;
    case 0x05: bankFlash(0x05); break;
    case 0x06: bankFlash(0x06); break;
    case 0x07: bankFlash(0x07); break;
    case 0x08: bankFlash(0x08); break;
    case 0x09: bankFlash(0x09); break;
    case 0x0A: bankFlash(0x0A); break;
    case 0x0B: bankFlash(0x0B); break;
    case 0x0C: bankFlash(0x0C); break;
    case 0x0D: bankFlash(0x0D); break;
    case 0x0E: bankFlash(0x0E); break;
    case 0x0F: bankFlash(0x0F); break;
  }
}

void key(uint8_t keyPressed){
  lastKeyTime = millis();
  while(digitalRead(KEYIN) == LOW){
    currentKeyTime = millis();
    if(currentKeyTime - lastKeyTime >= HOLD_THRESHOLD){
      currentKeyTime = 0;
      lastKeyTime = 0;
      checkKeyHold(keyPressed);
    }
  }
  if(currentKeyTime - lastKeyTime >= DEBOUNCE_TIME){
    currentKeyTime = 0;
    lastKeyTime = 0;
    checkKeyPress(keyPressed);
  }
}

void setup() {
  pinMode(LEDOUT, OUTPUT);
  pinMode(KEYIN, INPUT);
  DDRF = DDRF | 0xFF;          // set all PF pins as output
  Keyboard.begin();
  animation();
}

void checkKeyHold(uint8_t sel){
  switch(sel){
    case 0x00: currentOS = 0x02; bankFlashOS(0x00); break;
    case 0x01: currentOS = 0x01; bankFlashOS(0x01); break;
    case 0x02: currentOS = 0x00; bankFlashOS(0x02); break;
    case 0x03: currentBank = 0x0C; bankSelectFeedback(0x03); break;
    case 0x04: currentBank = 0x0B; bankSelectFeedback(0x04); break;
    case 0x05: currentBank = 0x0A; bankSelectFeedback(0x05); break;
    case 0x06: currentBank = 0x09; bankSelectFeedback(0x06); break;
    case 0x07: currentBank = 0x08; bankSelectFeedback(0x07); break;
    case 0x08: currentBank = 0x07; bankSelectFeedback(0x08); break;
    case 0x09: currentBank = 0x06; bankSelectFeedback(0x09); break;
    case 0x0A: currentBank = 0x05; bankSelectFeedback(0x0A); break;
    case 0x0B: currentBank = 0x04; bankSelectFeedback(0x0B); break;
    case 0x0C: currentBank = 0x03; bankSelectFeedback(0x0C); break;
    case 0x0D: currentBank = 0x02; bankSelectFeedback(0x0D); break;
    case 0x0E: currentBank = 0x01; bankSelectFeedback(0x0E); break;
    case 0x0F: currentBank = 0x00; bankSelectFeedback(0x0F); break;
  }
}

void checkKeyPress(uint8_t sel){
  switch(currentBank){
    case 0:
      switch(sel){
        case 0x00: bank0(sel, currentOS); break;
        case 0x01: bank0(sel, currentOS); break;
        case 0x02: bank0(sel, currentOS); break;
        case 0x03: bank0(sel, currentOS); break;
        case 0x04: bank0(sel, currentOS); break;
        case 0x05: bank0(sel, currentOS); break;
        case 0x06: bank0(sel, currentOS); break;
        case 0x07: bank0(sel, currentOS); break;
        case 0x08: bank0(sel, currentOS); break;
        case 0x09: bank0(sel, currentOS); break;
        case 0x0A: bank0(sel, currentOS); break;
        case 0x0B: bank0(sel, currentOS); break;
        case 0x0C: bank0(sel, currentOS); break;
        case 0x0D: bank0(sel, currentOS); break;
        case 0x0E: bank0(sel, currentOS); break;
        case 0x0F: bank0(sel, currentOS); break;
      }
      break;

    case 1:
      switch(sel){
        case 0x00: bank1(sel, currentOS); break;
        case 0x01: bank1(sel, currentOS); break;
        case 0x02: bank1(sel, currentOS); break;
        case 0x03: bank1(sel, currentOS); break;
        case 0x04: bank1(sel, currentOS); break;
        case 0x05: bank1(sel, currentOS); break;
        case 0x06: bank1(sel, currentOS); break;
        case 0x07: bank1(sel, currentOS); break;
        case 0x08: bank1(sel, currentOS); break;
        case 0x09: bank1(sel, currentOS); break;
        case 0x0A: bank1(sel, currentOS); break;
        case 0x0B: bank1(sel, currentOS); break;
        case 0x0C: bank1(sel, currentOS); break;
        case 0x0D: bank1(sel, currentOS); break;
        case 0x0E: bank1(sel, currentOS); break;
        case 0x0F: bank1(sel, currentOS); break;
      }
      break;

    case 2:
      switch(sel){
        case 0x00: bank2(sel, currentOS); break;
        case 0x01: bank2(sel, currentOS); break;
        case 0x02: bank2(sel, currentOS); break;
        case 0x03: bank2(sel, currentOS); break;
        case 0x04: bank2(sel, currentOS); break;
        case 0x05: bank2(sel, currentOS); break;
        case 0x06: bank2(sel, currentOS); break;
        case 0x07: bank2(sel, currentOS); break;
        case 0x08: bank2(sel, currentOS); break;
        case 0x09: bank2(sel, currentOS); break;
        case 0x0A: bank2(sel, currentOS); break;
        case 0x0B: bank2(sel, currentOS); break;
        case 0x0C: bank2(sel, currentOS); break;
        case 0x0D: bank2(sel, currentOS); break;
        case 0x0E: bank2(sel, currentOS); break;
        case 0x0F: bank2(sel, currentOS); break;
      }
      break;
      
    case 3:
      switch(sel){
        case 0x00: bank3(sel, currentOS); break;
        case 0x01: bank3(sel, currentOS); break;
        case 0x02: bank3(sel, currentOS); break;
        case 0x03: bank3(sel, currentOS); break;
        case 0x04: bank3(sel, currentOS); break;
        case 0x05: bank3(sel, currentOS); break;
        case 0x06: bank3(sel, currentOS); break;
        case 0x07: bank3(sel, currentOS); break;
        case 0x08: bank3(sel, currentOS); break;
        case 0x09: bank3(sel, currentOS); break;
        case 0x0A: bank3(sel, currentOS); break;
        case 0x0B: bank3(sel, currentOS); break;
        case 0x0C: bank3(sel, currentOS); break;
        case 0x0D: bank3(sel, currentOS); break;
        case 0x0E: bank3(sel, currentOS); break;
        case 0x0F: bank3(sel, currentOS); break;
      }
      break;

    case 4:
      switch(sel){
        case 0x00: bank4(sel, currentOS); break;
        case 0x01: bank4(sel, currentOS); break;
        case 0x02: bank4(sel, currentOS); break;
        case 0x03: bank4(sel, currentOS); break;
        case 0x04: bank4(sel, currentOS); break;
        case 0x05: bank4(sel, currentOS); break;
        case 0x06: bank4(sel, currentOS); break;
        case 0x07: bank4(sel, currentOS); break;
        case 0x08: bank4(sel, currentOS); break;
        case 0x09: bank4(sel, currentOS); break;
        case 0x0A: bank4(sel, currentOS); break;
        case 0x0B: bank4(sel, currentOS); break;
        case 0x0C: bank4(sel, currentOS); break;
        case 0x0D: bank4(sel, currentOS); break;
        case 0x0E: bank4(sel, currentOS); break;
        case 0x0F: bank4(sel, currentOS); break;
      }
      break;

    case 5:
      switch(sel){
        case 0x00: bank5(sel, currentOS); break;
        case 0x01: bank5(sel, currentOS); break;
        case 0x02: bank5(sel, currentOS); break;
        case 0x03: bank5(sel, currentOS); break;
        case 0x04: bank5(sel, currentOS); break;
        case 0x05: bank5(sel, currentOS); break;
        case 0x06: bank5(sel, currentOS); break;
        case 0x07: bank5(sel, currentOS); break;
        case 0x08: bank5(sel, currentOS); break;
        case 0x09: bank5(sel, currentOS); break;
        case 0x0A: bank5(sel, currentOS); break;
        case 0x0B: bank5(sel, currentOS); break;
        case 0x0C: bank5(sel, currentOS); break;
        case 0x0D: bank5(sel, currentOS); break;
        case 0x0E: bank5(sel, currentOS); break;
        case 0x0F: bank5(sel, currentOS); break;
      }
      break;

    case 6:
      switch(sel){
        case 0x00: bank6(sel, currentOS); break;
        case 0x01: bank6(sel, currentOS); break;
        case 0x02: bank6(sel, currentOS); break;
        case 0x03: bank6(sel, currentOS); break;
        case 0x04: bank6(sel, currentOS); break;
        case 0x05: bank6(sel, currentOS); break;
        case 0x06: bank6(sel, currentOS); break;
        case 0x07: bank6(sel, currentOS); break;
        case 0x08: bank6(sel, currentOS); break;
        case 0x09: bank6(sel, currentOS); break;
        case 0x0A: bank6(sel, currentOS); break;
        case 0x0B: bank6(sel, currentOS); break;
        case 0x0C: bank6(sel, currentOS); break;
        case 0x0D: bank6(sel, currentOS); break;
        case 0x0E: bank6(sel, currentOS); break;
        case 0x0F: bank6(sel, currentOS); break;
      }
      break;
      
    case 7:
      switch(sel){
        case 0x00: bank7(sel, currentOS); break;
        case 0x01: bank7(sel, currentOS); break;
        case 0x02: bank7(sel, currentOS); break;
        case 0x03: bank7(sel, currentOS); break;
        case 0x04: bank7(sel, currentOS); break;
        case 0x05: bank7(sel, currentOS); break;
        case 0x06: bank7(sel, currentOS); break;
        case 0x07: bank7(sel, currentOS); break;
        case 0x08: bank7(sel, currentOS); break;
        case 0x09: bank7(sel, currentOS); break;
        case 0x0A: bank7(sel, currentOS); break;
        case 0x0B: bank7(sel, currentOS); break;
        case 0x0C: bank7(sel, currentOS); break;
        case 0x0D: bank7(sel, currentOS); break;
        case 0x0E: bank7(sel, currentOS); break;
        case 0x0F: bank7(sel, currentOS); break;
      }
      break;

    case 8:
      switch(sel){
        case 0x00: bank8(sel, currentOS); break;
        case 0x01: bank8(sel, currentOS); break;
        case 0x02: bank8(sel, currentOS); break;
        case 0x03: bank8(sel, currentOS); break;
        case 0x04: bank8(sel, currentOS); break;
        case 0x05: bank8(sel, currentOS); break;
        case 0x06: bank8(sel, currentOS); break;
        case 0x07: bank8(sel, currentOS); break;
        case 0x08: bank8(sel, currentOS); break;
        case 0x09: bank8(sel, currentOS); break;
        case 0x0A: bank8(sel, currentOS); break;
        case 0x0B: bank8(sel, currentOS); break;
        case 0x0C: bank8(sel, currentOS); break;
        case 0x0D: bank8(sel, currentOS); break;
        case 0x0E: bank8(sel, currentOS); break;
        case 0x0F: bank8(sel, currentOS); break;
      }
      break;

    case 9:
      switch(sel){
        case 0x00: bank9(sel, currentOS); break;
        case 0x01: bank9(sel, currentOS); break;
        case 0x02: bank9(sel, currentOS); break;
        case 0x03: bank9(sel, currentOS); break;
        case 0x04: bank9(sel, currentOS); break;
        case 0x05: bank9(sel, currentOS); break;
        case 0x06: bank9(sel, currentOS); break;
        case 0x07: bank9(sel, currentOS); break;
        case 0x08: bank9(sel, currentOS); break;
        case 0x09: bank9(sel, currentOS); break;
        case 0x0A: bank9(sel, currentOS); break;
        case 0x0B: bank9(sel, currentOS); break;
        case 0x0C: bank9(sel, currentOS); break;
        case 0x0D: bank9(sel, currentOS); break;
        case 0x0E: bank9(sel, currentOS); break;
        case 0x0F: bank9(sel, currentOS); break;
      }
      break;

    case 10:
      switch(sel){
        case 0x00: bankA(sel, currentOS); break;
        case 0x01: bankA(sel, currentOS); break;
        case 0x02: bankA(sel, currentOS); break;
        case 0x03: bankA(sel, currentOS); break;
        case 0x04: bankA(sel, currentOS); break;
        case 0x05: bankA(sel, currentOS); break;
        case 0x06: bankA(sel, currentOS); break;
        case 0x07: bankA(sel, currentOS); break;
        case 0x08: bankA(sel, currentOS); break;
        case 0x09: bankA(sel, currentOS); break;
        case 0x0A: bankA(sel, currentOS); break;
        case 0x0B: bankA(sel, currentOS); break;
        case 0x0C: bankA(sel, currentOS); break;
        case 0x0D: bankA(sel, currentOS); break;
        case 0x0E: bankA(sel, currentOS); break;
        case 0x0F: bankA(sel, currentOS); break;
      }
      break;
      
    case 11:
      switch(sel){
        case 0x00: bankB(sel, currentOS); break;
        case 0x01: bankB(sel, currentOS); break;
        case 0x02: bankB(sel, currentOS); break;
        case 0x03: bankB(sel, currentOS); break;
        case 0x04: bankB(sel, currentOS); break;
        case 0x05: bankB(sel, currentOS); break;
        case 0x06: bankB(sel, currentOS); break;
        case 0x07: bankB(sel, currentOS); break;
        case 0x08: bankB(sel, currentOS); break;
        case 0x09: bankB(sel, currentOS); break;
        case 0x0A: bankB(sel, currentOS); break;
        case 0x0B: bankB(sel, currentOS); break;
        case 0x0C: bankB(sel, currentOS); break;
        case 0x0D: bankB(sel, currentOS); break;
        case 0x0E: bankB(sel, currentOS); break;
        case 0x0F: bankB(sel, currentOS); break;
      }
      break;

    case 12:
      switch(sel){
        case 0x00: bankC(sel, currentOS); break;
        case 0x01: bankC(sel, currentOS); break;
        case 0x02: bankC(sel, currentOS); break;
        case 0x03: bankC(sel, currentOS); break;
        case 0x04: bankC(sel, currentOS); break;
        case 0x05: bankC(sel, currentOS); break;
        case 0x06: bankC(sel, currentOS); break;
        case 0x07: bankC(sel, currentOS); break;
        case 0x08: bankC(sel, currentOS); break;
        case 0x09: bankC(sel, currentOS); break;
        case 0x0A: bankC(sel, currentOS); break;
        case 0x0B: bankC(sel, currentOS); break;
        case 0x0C: bankC(sel, currentOS); break;
        case 0x0D: bankC(sel, currentOS); break;
        case 0x0E: bankC(sel, currentOS); break;
        case 0x0F: bankC(sel, currentOS); break;
      }
      break;
  }
}

void loop() {
  for(uint8_t i = 0; i < 16; i++){
    uint8_t select = i << 4;
    PORTF = select;
    analogWrite(LEDOUT, BACKLIGHT_INTENSITY);
    if(digitalRead(KEYIN) == LOW) {
      key(i);
    }
  }
}

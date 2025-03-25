#include "Keyboard.h"

// Banks D, E, F reserved for operating system selection

// Operating systems are selected as follows:
// OS == 0 -> Linux
// OS == 1 -> Windows
// OS == 2 -> macOS

// keyPressed values correspond to each key 0 through F

// Simple key presses use normal Keyboard.h functions (write(), print(), press(), release(), etc...)
// Printing special characters is OS-dependent:
//  Linux uses a key combination of l_ctrl, l_shift, u, <hex unicode value>
//  Windows uses alt keys: alt + numpad(<values one by one>)
//    -> Windows also allows printing Unicode characters by first typing the code and then pressing the l_alt + x key combination
//  Mac uses special key combinations with Option + <other keys> 
//    -> Mac also allows unicode hex input by first enabling the Unicode Hex layout in keyboard settings and then holding Option and typing a hex unicode value

/* --- Function Format ---

void bankX(uint8_t keyPressed, uint8_t OS){ // Key 1, sel 0x0E
  switch(OS){
    case 0: // LINUX BINDS 
    switch(keyPressed){
      case 0x00: <Keyboard.h function calls go here> break;   // key F
      case 0x01: <Keyboard.h function calls go here> break;   // key E
      case 0x02: <Keyboard.h function calls go here> break;   // key D
      case 0x03: <Keyboard.h function calls go here> break;   // key C
      case 0x04: <Keyboard.h function calls go here> break;   // key B
      case 0x05: <Keyboard.h function calls go here> break;   // key A
      case 0x06: <Keyboard.h function calls go here> break;   // key 9
      case 0x07: <Keyboard.h function calls go here> break;   // key 8
      case 0x08: <Keyboard.h function calls go here> break;   // key 7
      case 0x09: <Keyboard.h function calls go here> break;   // key 6
      case 0x0A: <Keyboard.h function calls go here> break;   // key 5
      case 0x0B: <Keyboard.h function calls go here> break;   // key 4
      case 0x0C: <Keyboard.h function calls go here> break;   // key 3
      case 0x0D: <Keyboard.h function calls go here> break;   // key 2
      case 0x0E: <Keyboard.h function calls go here> break;   // key 1
      case 0x0F: <Keyboard.h function calls go here> break;   // key 0
    } break;
    case 1: // WINDOWS BINDS
    switch(keyPressed){
      case 0x00: <Keyboard.h function calls go here> break;   // key F
      case 0x01: <Keyboard.h function calls go here> break;   // key E
      case 0x02: <Keyboard.h function calls go here> break;   // key D
      case 0x03: <Keyboard.h function calls go here> break;   // key C
      case 0x04: <Keyboard.h function calls go here> break;   // key B
      case 0x05: <Keyboard.h function calls go here> break;   // key A
      case 0x06: <Keyboard.h function calls go here> break;   // key 9
      case 0x07: <Keyboard.h function calls go here> break;   // key 8
      case 0x08: <Keyboard.h function calls go here> break;   // key 7
      case 0x09: <Keyboard.h function calls go here> break;   // key 6
      case 0x0A: <Keyboard.h function calls go here> break;   // key 5
      case 0x0B: <Keyboard.h function calls go here> break;   // key 4
      case 0x0C: <Keyboard.h function calls go here> break;   // key 3
      case 0x0D: <Keyboard.h function calls go here> break;   // key 2
      case 0x0E: <Keyboard.h function calls go here> break;   // key 1
      case 0x0F: <Keyboard.h function calls go here> break;   // key 0
    } break;
    case 2: // MAC BINDS (NO DEFAULTS DUE TO INABILITY TO TEST) -> REQUIRES A UNICODE HEX LAYOUT ENABLED
    switch(keyPressed){
      case 0x00: <Keyboard.h function calls go here> break;   // key F
      case 0x01: <Keyboard.h function calls go here> break;   // key E
      case 0x02: <Keyboard.h function calls go here> break;   // key D
      case 0x03: <Keyboard.h function calls go here> break;   // key C
      case 0x04: <Keyboard.h function calls go here> break;   // key B
      case 0x05: <Keyboard.h function calls go here> break;   // key A
      case 0x06: <Keyboard.h function calls go here> break;   // key 9
      case 0x07: <Keyboard.h function calls go here> break;   // key 8
      case 0x08: <Keyboard.h function calls go here> break;   // key 7
      case 0x09: <Keyboard.h function calls go here> break;   // key 6
      case 0x0A: <Keyboard.h function calls go here> break;   // key 5
      case 0x0B: <Keyboard.h function calls go here> break;   // key 4
      case 0x0C: <Keyboard.h function calls go here> break;   // key 3
      case 0x0D: <Keyboard.h function calls go here> break;   // key 2
      case 0x0E: <Keyboard.h function calls go here> break;   // key 1
      case 0x0F: <Keyboard.h function calls go here> break;   // key 0
    } break;    
  }
}


*/

void bank0(uint8_t keyPressed, uint8_t OS){ // Key 0, sel 0x0F
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('p'); delay(2); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('o'); delay(2); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('n'); delay(2); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('m'); delay(2); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('l'); delay(2); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('k'); delay(2); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('j'); delay(2); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('i'); delay(2); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('h'); delay(2); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('g'); delay(2); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('f'); delay(2); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('e'); delay(2); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('d'); delay(2); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('c'); delay(2); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('b'); delay(2); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('a'); delay(2); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('p'); delay(2); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('o'); delay(2); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('n'); delay(2); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('m'); delay(2); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('l'); delay(2); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('k'); delay(2); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('j'); delay(2); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('i'); delay(2); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('h'); delay(2); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('g'); delay(2); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('f'); delay(2); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('e'); delay(2); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('d'); delay(2); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('c'); delay(2); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('b'); delay(2); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('a'); delay(2); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('p'); delay(2); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('o'); delay(2); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('n'); delay(2); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('m'); delay(2); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('l'); delay(2); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('k'); delay(2); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('j'); delay(2); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('i'); delay(2); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('h'); delay(2); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('g'); delay(2); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('f'); delay(2); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('e'); delay(2); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('d'); delay(2); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('c'); delay(2); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('b'); delay(2); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press(KEY_RIGHT_CTRL); delay(2); Keyboard.press('a'); delay(2); Keyboard.releaseAll(); break;   // key 0
    } break;
  }
}

void bank1(uint8_t keyPressed, uint8_t OS){ // Key 1, sel 0x0E
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank2(uint8_t keyPressed, uint8_t OS){ // Key 2, sel 0x0D
  switch(keyPressed){
    case 0x00: Keyboard.print("0x0F"); break;   // key F
    case 0x01: Keyboard.print("0x0E"); break;   // key E
    case 0x02: Keyboard.print("0x0D"); break;   // key D
    case 0x03: Keyboard.print("0x0C"); break;   // key C
    case 0x04: Keyboard.print("0x0B"); break;   // key B
    case 0x05: Keyboard.print("0x0A"); break;   // key A
    case 0x06: Keyboard.print("0x09"); break;   // key 9
    case 0x07: Keyboard.print("0x08"); break;   // key 8
    case 0x08: Keyboard.print("0x07"); break;   // key 7
    case 0x09: Keyboard.print("0x06"); break;   // key 6
    case 0x0A: Keyboard.print("0x05"); break;   // key 5
    case 0x0B: Keyboard.print("0x04"); break;   // key 4
    case 0x0C: Keyboard.print("0x03"); break;   // key 3
    case 0x0D: Keyboard.print("0x02"); break;   // key 2
    case 0x0E: Keyboard.print("0x01"); break;   // key 1
    case 0x0F: Keyboard.print("0x00"); break;   // key 0
  }
}

void bank3(uint8_t keyPressed, uint8_t OS){ // Key 3, sel 0x0C
  switch(keyPressed){
    case 0x00: Keyboard.print("0x000F"); break;   // key F
    case 0x01: Keyboard.print("0x000E"); break;   // key E
    case 0x02: Keyboard.print("0x000D"); break;   // key D
    case 0x03: Keyboard.print("0x000C"); break;   // key C
    case 0x04: Keyboard.print("0x000B"); break;   // key B
    case 0x05: Keyboard.print("0x000A"); break;   // key A
    case 0x06: Keyboard.print("0x0009"); break;   // key 9
    case 0x07: Keyboard.print("0x0008"); break;   // key 8
    case 0x08: Keyboard.print("0x0007"); break;   // key 7
    case 0x09: Keyboard.print("0x0006"); break;   // key 6
    case 0x0A: Keyboard.print("0x0005"); break;   // key 5
    case 0x0B: Keyboard.print("0x0004"); break;   // key 4
    case 0x0C: Keyboard.print("0x0003"); break;   // key 3
    case 0x0D: Keyboard.print("0x0002"); break;   // key 2
    case 0x0E: Keyboard.print("0x0001"); break;   // key 1
    case 0x0F: Keyboard.print("0x0000"); break;   // key 0
  }
}

void bank4(uint8_t keyPressed, uint8_t OS){ // Key 4, sel 0x0B
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank5(uint8_t keyPressed, uint8_t OS){ // Key 5, sel 0x0A
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank6(uint8_t keyPressed, uint8_t OS){ // Key 6, sel 0x09
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank7(uint8_t keyPressed, uint8_t OS){ // Key 7, sel 0x08
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank8(uint8_t keyPressed, uint8_t OS){ // Key 8, sel 0x07
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bank9(uint8_t keyPressed, uint8_t OS){ // Key 9, sel 0x06
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press('F'); delay(10); Keyboard.releaseAll(); break;   // key F
      case 0x01: Keyboard.press('E'); delay(10); Keyboard.releaseAll(); break;   // key E
      case 0x02: Keyboard.press('D'); delay(10); Keyboard.releaseAll(); break;   // key D
      case 0x03: Keyboard.press('C'); delay(10); Keyboard.releaseAll(); break;   // key C
      case 0x04: Keyboard.press('B'); delay(10); Keyboard.releaseAll(); break;   // key B
      case 0x05: Keyboard.press('A'); delay(10); Keyboard.releaseAll(); break;   // key A
      case 0x06: Keyboard.press('9'); delay(10); Keyboard.releaseAll(); break;   // key 9
      case 0x07: Keyboard.press('8'); delay(10); Keyboard.releaseAll(); break;   // key 8
      case 0x08: Keyboard.press('7'); delay(10); Keyboard.releaseAll(); break;   // key 7
      case 0x09: Keyboard.press('6'); delay(10); Keyboard.releaseAll(); break;   // key 6
      case 0x0A: Keyboard.press('5'); delay(10); Keyboard.releaseAll(); break;   // key 5
      case 0x0B: Keyboard.press('4'); delay(10); Keyboard.releaseAll(); break;   // key 4
      case 0x0C: Keyboard.press('3'); delay(10); Keyboard.releaseAll(); break;   // key 3
      case 0x0D: Keyboard.press('2'); delay(10); Keyboard.releaseAll(); break;   // key 2
      case 0x0E: Keyboard.press('1'); delay(10); Keyboard.releaseAll(); break;   // key 1
      case 0x0F: Keyboard.press('0'); delay(10); Keyboard.releaseAll(); break;   // key 0
    } break;    
  }
}

void bankA(uint8_t keyPressed, uint8_t OS){ // Key A, sel 0x05
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03a3"); delay(5); Keyboard.releaseAll(); break;   // key F sigma
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03a9"); delay(5); Keyboard.releaseAll(); break;   // key E upper omega
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03c9"); delay(5); Keyboard.releaseAll(); break;   // key D lower omega
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03c6"); delay(5); Keyboard.releaseAll(); break;   // key C phi
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03c4"); delay(5); Keyboard.releaseAll(); break;   // key B tau
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03c1"); delay(5); Keyboard.releaseAll(); break;   // key A rho
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03c0"); delay(5); Keyboard.releaseAll(); break;   // key 9 pi
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03bd"); delay(5); Keyboard.releaseAll(); break;   // key 8 nu
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03bc"); delay(5); Keyboard.releaseAll(); break;   // key 7 mu
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03bb"); delay(5); Keyboard.releaseAll(); break;   // key 6 lambda
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03b8"); delay(5); Keyboard.releaseAll(); break;   // key 5 theta
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03b7"); delay(5); Keyboard.releaseAll(); break;   // key 4 eta
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("0394"); delay(5); Keyboard.releaseAll(); break;   // key 3 delta
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03b3"); delay(5); Keyboard.releaseAll(); break;   // key 2 gamma 
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03b2"); delay(5); Keyboard.releaseAll(); break;   // key 1 beta
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("03b1"); delay(5); Keyboard.releaseAll(); break;   // key 0 alpha
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.print("03a3"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key F sigma
      case 0x01: Keyboard.print("03a9"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key E upper omega
      case 0x02: Keyboard.print("03c9"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key D lower omega
      case 0x03: Keyboard.print("03c6"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key C phi
      case 0x04: Keyboard.print("03c4"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key B tau
      case 0x05: Keyboard.print("03c1"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key A rho
      case 0x06: Keyboard.print("03c0"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 9 pi
      case 0x07: Keyboard.print("03bd"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 8 nu
      case 0x08: Keyboard.print("03bc"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 7 mu
      case 0x09: Keyboard.print("03bb"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 6 lambda
      case 0x0A: Keyboard.print("03b8"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 5 theta
      case 0x0B: Keyboard.print("03b7"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 4 eta
      case 0x0C: Keyboard.print("0394"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 3 delta
      case 0x0D: Keyboard.print("03b3"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 2 gamma 
      case 0x0E: Keyboard.print("03b2"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 1 beta
      case 0x0F: Keyboard.print("03b1"); delay(5); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 0 alpha
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03a3"); delay(5); Keyboard.releaseAll(); break;   // key F sigma
      case 0x01: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03a9"); delay(5); Keyboard.releaseAll(); break;   // key E upper omega
      case 0x02: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03c9"); delay(5); Keyboard.releaseAll(); break;   // key D lower omega
      case 0x03: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03c6"); delay(5); Keyboard.releaseAll(); break;   // key C phi
      case 0x04: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03c4"); delay(5); Keyboard.releaseAll(); break;   // key B tau
      case 0x05: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03c1"); delay(5); Keyboard.releaseAll(); break;   // key A rho
      case 0x06: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03c0"); delay(5); Keyboard.releaseAll(); break;   // key 9 pi
      case 0x07: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03bd"); delay(5); Keyboard.releaseAll(); break;   // key 8 nu
      case 0x08: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03bc"); delay(5); Keyboard.releaseAll(); break;   // key 7 mu
      case 0x09: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03bb"); delay(5); Keyboard.releaseAll(); break;   // key 6 lambda
      case 0x0A: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03b8"); delay(5); Keyboard.releaseAll(); break;   // key 5 theta
      case 0x0B: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03b7"); delay(5); Keyboard.releaseAll(); break;   // key 4 eta
      case 0x0C: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("0394"); delay(5); Keyboard.releaseAll(); break;   // key 3 delta
      case 0x0D: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03b3"); delay(5); Keyboard.releaseAll(); break;   // key 2 gamma 
      case 0x0E: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03b2"); delay(5); Keyboard.releaseAll(); break;   // key 1 beta
      case 0x0F: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("03b1"); delay(5); Keyboard.releaseAll(); break;   // key 0 alpha
    } break;
  }

}

void bankB(uint8_t keyPressed, uint8_t OS){ // Key B, sel 0x04
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2248"); delay(5); Keyboard.releaseAll(); break;   // key F approximately
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2261"); delay(5); Keyboard.releaseAll(); break;   // key E identical to
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2205"); delay(5); Keyboard.releaseAll(); break;   // key D empty set
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2220"); delay(5); Keyboard.releaseAll(); break;   // key C angle
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2206"); delay(5); Keyboard.releaseAll(); break;   // key B increment
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2234"); delay(5); Keyboard.releaseAll(); break;   // key A therefore
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2200"); delay(5); Keyboard.releaseAll(); break;   // key 9 for all
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2203"); delay(5); Keyboard.releaseAll(); break;   // key 8 there exists
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("221a"); delay(5); Keyboard.releaseAll(); break;   // key 7 sqrt
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("220c"); delay(5); Keyboard.releaseAll(); break;   // key 6 not contains
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("220b"); delay(5); Keyboard.releaseAll(); break;   // key 5 contains
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2209"); delay(5); Keyboard.releaseAll(); break;   // key 4 not element of
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2208"); delay(5); Keyboard.releaseAll(); break;   // key 3 element of
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("21d2"); delay(5); Keyboard.releaseAll(); break;   // key 2 right double arrow
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2192"); delay(5); Keyboard.releaseAll(); break;   // key 1 right arrow
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2190"); delay(5); Keyboard.releaseAll(); break;   // key 0 left arrow
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.print("2248"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key F approximately
      case 0x01: Keyboard.print("2261"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key E identical to
      case 0x02: Keyboard.print("2205"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key D empty set
      case 0x03: Keyboard.print("2220"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key C angle
      case 0x04: Keyboard.print("2206"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key B increment
      case 0x05: Keyboard.print("2234"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key A therefore
      case 0x06: Keyboard.print("2200"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 9 for all
      case 0x07: Keyboard.print("2203"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 8 there exists
      case 0x08: Keyboard.print("221a"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 7 sqrt
      case 0x09: Keyboard.print("220c"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 6 not contains
      case 0x0A: Keyboard.print("220b"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 5 contains
      case 0x0B: Keyboard.print("2209"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 4 not element of
      case 0x0C: Keyboard.print("2208"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 3 element of
      case 0x0D: Keyboard.print("21d2"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 2 right double arrow
      case 0x0E: Keyboard.print("2192"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 1 right arrow
      case 0x0F: Keyboard.print("2190"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 0 left arrow
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2248"); delay(5); Keyboard.releaseAll(); break;   // key F approximately
      case 0x01: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2261"); delay(5); Keyboard.releaseAll(); break;   // key E identical to
      case 0x02: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2205"); delay(5); Keyboard.releaseAll(); break;   // key D empty set
      case 0x03: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2220"); delay(5); Keyboard.releaseAll(); break;   // key C angle
      case 0x04: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2206"); delay(5); Keyboard.releaseAll(); break;   // key B increment
      case 0x05: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2234"); delay(5); Keyboard.releaseAll(); break;   // key A therefore
      case 0x06: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2200"); delay(5); Keyboard.releaseAll(); break;   // key 9 for all
      case 0x07: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2203"); delay(5); Keyboard.releaseAll(); break;   // key 8 there exists
      case 0x08: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("221a"); delay(5); Keyboard.releaseAll(); break;   // key 7 sqrt
      case 0x09: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("220c"); delay(5); Keyboard.releaseAll(); break;   // key 6 not contains
      case 0x0A: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("220b"); delay(5); Keyboard.releaseAll(); break;   // key 5 contains
      case 0x0B: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2209"); delay(5); Keyboard.releaseAll(); break;   // key 4 not element of
      case 0x0C: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2208"); delay(5); Keyboard.releaseAll(); break;   // key 3 element of
      case 0x0D: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("21d2"); delay(5); Keyboard.releaseAll(); break;   // key 2 right double arrow
      case 0x0E: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2192"); delay(5); Keyboard.releaseAll(); break;   // key 1 right arrow
      case 0x0F: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2190"); delay(5); Keyboard.releaseAll(); break;   // key 0 left arrow
    } break;
  }

}

void bankC(uint8_t keyPressed, uint8_t OS){ // Key C, sel 0x03
  switch(OS){
    case 0:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2248"); delay(5); Keyboard.releaseAll(); break;   // key F tely
      case 0x01: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2261"); delay(5); Keyboard.releaseAll(); break;   // key E  to
      case 0x02: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2205"); delay(5); Keyboard.releaseAll(); break;   // key D  set
      case 0x03: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2220"); delay(5); Keyboard.releaseAll(); break;   // key C 
      case 0x04: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2206"); delay(5); Keyboard.releaseAll(); break;   // key B 
      case 0x05: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2234"); delay(5); Keyboard.releaseAll(); break;   // key A 
      case 0x06: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2200"); delay(5); Keyboard.releaseAll(); break;   // key 9  all
      case 0x07: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2203"); delay(5); Keyboard.releaseAll(); break;   // key 8 e exists
      case 0x08: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("221a"); delay(5); Keyboard.releaseAll(); break;   // key 7 
      case 0x09: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("220c"); delay(5); Keyboard.releaseAll(); break;   // key 6  contains
      case 0x0A: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("220b"); delay(5); Keyboard.releaseAll(); break;   // key 5 tains
      case 0x0B: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2209"); delay(5); Keyboard.releaseAll(); break;   // key 4  element of
      case 0x0C: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2208"); delay(5); Keyboard.releaseAll(); break;   // key 3 nt of
      case 0x0D: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("21d2"); delay(5); Keyboard.releaseAll(); break;   // key 2  double arrow
      case 0x0E: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2192"); delay(5); Keyboard.releaseAll(); break;   // key 1 t arrow
      case 0x0F: Keyboard.press(KEY_LEFT_CTRL); delay(2); Keyboard.press(KEY_LEFT_SHIFT); delay(2); Keyboard.press('u'); delay(2); Keyboard.release('u'); delay(5); Keyboard.print("2190"); delay(5); Keyboard.releaseAll(); break;   // key 0  arrow
    } break;
    case 1:
    switch(keyPressed){
      case 0x00: Keyboard.print("2248"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key F tely
      case 0x01: Keyboard.print("2261"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key E  to
      case 0x02: Keyboard.print("2205"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key D  set
      case 0x03: Keyboard.print("2220"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key C 
      case 0x04: Keyboard.print("2206"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key B 
      case 0x05: Keyboard.print("2234"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key A 
      case 0x06: Keyboard.print("2200"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 9  all
      case 0x07: Keyboard.print("2203"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 8 e exists
      case 0x08: Keyboard.print("221a"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 7 
      case 0x09: Keyboard.print("220c"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 6  contains
      case 0x0A: Keyboard.print("220b"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 5 tains
      case 0x0B: Keyboard.print("2209"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 4  element of
      case 0x0C: Keyboard.print("2208"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 3 nt of
      case 0x0D: Keyboard.print("21d2"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 2  double arrow
      case 0x0E: Keyboard.print("2192"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 1 t arrow
      case 0x0F: Keyboard.print("2190"); delay(2); Keyboard.press(KEY_LEFT_ALT); delay(2); Keyboard.press('x'); delay(2); Keyboard.releaseAll(); break;   // key 0  arrow
    } break;
    case 2:
    switch(keyPressed){
      case 0x00: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2248"); delay(5); Keyboard.releaseAll(); break;   // key F tely
      case 0x01: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2261"); delay(5); Keyboard.releaseAll(); break;   // key E  to
      case 0x02: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2205"); delay(5); Keyboard.releaseAll(); break;   // key D  set
      case 0x03: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2220"); delay(5); Keyboard.releaseAll(); break;   // key C 
      case 0x04: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2206"); delay(5); Keyboard.releaseAll(); break;   // key B 
      case 0x05: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2234"); delay(5); Keyboard.releaseAll(); break;   // key A 
      case 0x06: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2200"); delay(5); Keyboard.releaseAll(); break;   // key 9  all
      case 0x07: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2203"); delay(5); Keyboard.releaseAll(); break;   // key 8 e exists
      case 0x08: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("221a"); delay(5); Keyboard.releaseAll(); break;   // key 7 
      case 0x09: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("220c"); delay(5); Keyboard.releaseAll(); break;   // key 6  contains
      case 0x0A: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("220b"); delay(5); Keyboard.releaseAll(); break;   // key 5 tains
      case 0x0B: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2209"); delay(5); Keyboard.releaseAll(); break;   // key 4  element of
      case 0x0C: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2208"); delay(5); Keyboard.releaseAll(); break;   // key 3 nt of
      case 0x0D: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("21d2"); delay(5); Keyboard.releaseAll(); break;   // key 2  double arrow
      case 0x0E: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2192"); delay(5); Keyboard.releaseAll(); break;   // key 1 t arrow
      case 0x0F: Keyboard.press(KEY_LEFT_ALT); delay(20); Keyboard.print("2190"); delay(5); Keyboard.releaseAll(); break;   // key 0  arrow
    } break;
  }

}


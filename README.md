# freeMacro rev. 1
A simple macro keypad that invokes key combinations, prints strings of text, and types special characters.

Special thanks to Arduino LLC for providing the Keyboard library that was used to create this project.
The link to the library is available under:
https://github.com/arduino-libraries/Keyboard

## Features
* Typing strings, invoking macros, and typing special characters from the Unicode table
* 13 assignable banks with combinations of all three types of keypresses
* On the fly assignment of target operating system (Linux, Windows, macOS)
* Dependency free, plug and play
* Config generation handled by genConfig

## Default Firmware Behavior
* On power on, the board will flash each LED individually from the F key to the 0 key
* Idle backlight should be steady without any flickering
* On each keypress, only that key will be lit. Others will not
* Holding down any key from 0 to C changes the current bank to that of they key held down
* Pressing a key will invoke its macro (key combo, string, or Unicode)
* Holding down keys from D to F will change the target operating system:
  * D: Linux
  * E: Windows
  * F: macOS
* The default config initializes the bank to 9 and OS to Linux, if you prefer to use another combination, edit "banks.layout" and run genConfig (more instructions later)
* Bank and OS changes are indicated by the flash pattern:
  * fast: bank change
  * slow: OS change

## Modifying the config
* The firmware consists of two files:
  * freeMacro-firmware.ino: main firmware file that handles the logic
  * config.h: header file that houses all the functions called on keystrokes -> this is the config file
* Option 1: you can edit config.h directly if you want more control over your device (make sure to back up the default config in case of a rollback)
* Option 2: use genConfig and edit the soft config file (banks.layout)

## Arduino IDE is required for uploading the firmware (or Arduino CLI)
* Pro Micro boards are usually miniaturized Arduino Leonardos, selecting Arduino Leonardo in your board manager will likely work
* In case of upload issues, make sure you selected the correct board and plugged it in. Communication issues can be caused by the serial port being busy or not having permissions to use the port (Googling the programmer error will usually solve the issue)

## Using genConfig
* This repo provides the source code for genConfig and a Linux binary
* This program was only tested on Linux. Windows or macOS users may need to make changes to the source code, but this is unlikely. If you're using one of these systems, try compiling it first. For this you will need a C++ compiler. I used g++
* Compiling genConfig from source:
  * This program does not use any third-party dependencies
  * The only requirement for compilation is the C++ compiler itself; g++ is recommended
  * To compile the program, follow these steps:
  
    ```git clone https://github.com/pentodeman/freeMacro```
    
    ```cd freeMacro```

    ```g++ genConfig.cpp -o genConfig```

    ```./genConfig --help```
  * It is not recommended to add genConfig to any binary directories (/bin, /sbin, /usr/bin, /usr/sbin, etc...) as the program outputs the file to its current working directory
  * genConfig will look for the file called banks.layout in its current working directory and will output config.h
  * To use the new config, move the new config.h to the "freeMacro-firmware" directory and replace the old one (backing up your configs is recommended)
  * Once the new config.h is placed in the firmware directory, open the .ino file in Arduino IDE and upload it to your freeMacro board
  * Instructions for modifying banks.layout are in the file itself and include a general template with all possible keywords

## Assembly
* Required materials:
  * 1 PCB (Gerber files attached)
  * 16 3-pin full size mechanical switches of any kind (5-pin update coming soon in revision 2)
  * Electronic components listed in the BOM
  * 3D printed case (.stl files attached; feel free to design your own (.step file of the PCB can be generated in KiCad))
  * Low profile keycaps (currently full size keycaps have clearance issues with the enclosure)
* Tips for soldering the PCB:
  1. Start with the smallest and most repetitive components first (all passive and discrete components on the top plane)
  2. Solder the two multiplexer ICs
  3. Clean the PCB thoroughly with isopropanol
  4. Then solder the bottom LED current limiting resistors and clean the board again
  5. Solder the Arduino Pro Micro FLUSH with the PCB. The case is designed to fit the microcontroller soldered directly to the PCB using included headers (see images folder)
    * feed the headers from the bottom of the freeMacro PCB and place the Arduino on top
  6. After all electronic components are soldered, test the board by bridging switch pads with tweezers or any other conductor. Open any text editor and check if all characters are printed. Bank 9 of the default config is a good test
  7. Once everything works, solder the switches. If you use the top shell with the plate, print the plate first and populate it with switches. It works as a good soldering guide. Make sure to test fit the entire device before soldering the switches
  8. After soldering the switches, feed the LEDs throughand solder them. It's a good idea to just feed them and bend the leads for testing. Do it and plug in the board. If you see all LEDs shining (with some wiggling due to the lack of solder), the board works
  9. Trim the leads, clean the board one last time, and assemble the case
  10. Your board is ready, it's a good time to double check everything

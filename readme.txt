This project uses a Teensy 2.0 (ATMEGA32u4) and a custom designed interposer board that interfaces with the keyboard's flex cable to adapt the keyboard to USB. The Gerber files for the interposer board are included in the repository.

One thing of note is that the interposer + teensy won't fit in the case of the 200LX without removing the usb port and reset button. Unfortunately the USB doesn't break out to any of the external pins, so soldering wires to the pads for the port is nesicarry.

This project primarilly uses kbfirmware.com to configure, build and compile the firware for the adapter. I understand that kbfirmware.com uses a very old version of QMK and as such is at end-of-life, but It was the easiest solution I could find for asigning individual row-collum pairs to keys. I'm sure that a project like this is easily achieved with modern QMK, but I'm not familiar enough with it to do so, and this is a much easier option. 

Included in the files are some poorly taken notes about the keyboard matrix and what row-collum pair each key is assigned to (matrix info.txt). Also, a crudely traced picture mapping out the connections on the keyboard matrix itself (traces.jpg). 

This is my first project ever uploaded to github so assuming I'm doing something incorrectly please let me know. Thank you. 
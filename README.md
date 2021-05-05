# IRSTrOBe
Lewis Koplon, Kaetlin Archibald, Jeremy Dauer, Garrett Hartung, Adnan Taleb, Kayla Filipek

## What is the IRSTrOBe?
The STrOBe is a small, portable beacon that can be used to identify a target in the field. The device emits in the 1550 wavelength range such that it is only viewable to personnel equipped with specialized SWIR night vision devices. This device should be small and portable enough to be deployed by hand or by drone, rugged enough to be thrown or dropped onto the target, remotely programmable for field flexibility, and bright enough to be seen from a distance. 

## Installation Guide:
Depending on the where you source your Arduino Nano you will have to install drivers in order to properly open a com port to communicate and upload code to the Arduino

To install CH340G drivers needed for boards usually sourced not from the Arduino site, this step is unneccessary for boards from the Arduino site:
1) Download the Driver labeled as Windows CH340 Driver
2) Unzip the file
3) Run the installer which will be in the unzipped file
4) In the Arduino IDE when the CH340 is connected you will see a COM Port in the Tools > Serial Port menu, the COM port will vary per device

Next we are going to download the ZIP file from github and upload it to the arduino using the arrow key in the Arduino IDE.

The user will have to use the Bluetooth Terminal application to interface with the HC-05 and Arduino Nano.

Interfacing Options:
1) Continuous Wave Mode (press a and send on the bluetooth terminal application)
2) Flicker Mode (press b and send on the bluetooth terminal application)
3) Off Mode (press c and send on the bluetooth terminal application)

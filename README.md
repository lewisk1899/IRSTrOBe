# IRSTrOBe
Lewis Koplon, Kaetlin Archibald, Jeremy Dauer, Garrett Hartung, Adnan Taleb

### What is the IRSTrOBe?
The STrOBe is a small, portable beacon that can be used to identify a target in the field. The device emits in the 1550 wavelength range such that it is only viewable to personnel equipped with specialized SWIR night vision devices. This device should be small and portable enough to be deployed by hand or by drone, rugged enough to be thrown or dropped onto the target, remotely programmable for field flexibility, and bright enough to be seen from a distance. 

### Installation Guide:
Depending on the where you source your Arduino Nano you will have to install drivers in order to properly open a com port to communicate and upload code to the Arduino

To install CH340G drivers needed for boards usually sourced not from the Arduino site, this step is unneccessary for boards from the Arduino site:
1) Download the Windows CH340 Driver
2) Unzip the file
3) Run the installer which you unzipped
4) In the Arduino IDE when the CH340 is connected you will see a COM Port in the Tools > Serial Port menu, the COM number for your device may vary depending on your system.
To install CH340G drivers needed for boards usually sourced not from the Arduino site:

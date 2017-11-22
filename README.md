## Why?
One of the biggest challenges when doing [EEG hyperscanning](http://www.sciencedirect.com/science/article/pii/S0149763412001194) (or doing neural data acquisition on two or more people at the same time) is to synchronize multiple systems. hyperSynch aims to present a simple and cheap solution to synchronizing multiple EEG systems with each other AND both video and audio. The idea can be extended to multiple EEG systems, but this tutorial will show how to synchronize two systems + and Audio & Video recording


## The Basics
The arduino receives an input signal from the push button through pin 4, which changes its status from high to low (pull-up resistor; you can read more about it [here](https://learn.sparkfun.com/tutorials/pull-up-resistors)). Then it sends out 3 TTL pulses (50ms each with 500ms between them) from pin 6 to a TRS socket (where you can connect a splitter to send the information to both an audio interface + a camera) AND from pins 7, 8 to two parallel ports (where you can connect multiple EEG amplifier systems). Here you can see a basic schematic of the connections and the signal flow. 
![diagram](https://github.com/neurohazardous/hyperSynch/blob/master/assets/diagram.png)


## Required knowledge/skills
* Basic handling of a soldering iron and drill
* Basic Arduino programming skills 


## Required Tools
* Drill
* Cutter 
* Sand paper
* Screwdriver
* Soldering iron


## The Materials
* x1 [6.35mm Jack](https://www.digikey.ca/product-detail/en/switchcraft-inc/11/SC1085-ND/109515) 
* x1 [BNC Female](https://www.digikey.ca/product-detail/en/amphenol-rf-division/31-221-RFX/ARFX1064-ND/100648) 
* x2 [DB25 Female (Parallel port)](https://www.digikey.ca/product-detail/en/cw-industries/CWR-281-25-0000/CFM25G-ND/59398)
* x1 [Arduino uno](https://www.arduino.cc/en/Main/arduinoBoardUno/)
* x1 [AB USB Cable](https://www.digikey.ca/product-detail/en/qualtek/3021001-03/Q361-ND/1531288)
* x1 [Project Box](https://www.digikey.ca/product-detail/en/bud-industries/CU-1874-B/377-1165-ND/387084)
* x1 [Hand Push Button Switch](https://www.adinstruments.com/products/push-button-switches#product-MLA92) (know that we are using an "Oqus Trigger Switch". It is called "Wired trigger" here: https://www.qualisys.com/accessories/other-accessories/)
* x1 [Sharpie Metallic Permanent Marker](https://www.staples.ca/en/Sharpie-Metallic-Permanent-Markers-Fine-Tip-Silver-2-Pack/product_586069_1-CA_1_20001)
* x1 [Terminal Strip](https://www.digikey.ca/product-detail/en/keystone-electronics/810/36-810-ND/316822)
* x1 [6.35mm Male to 2x 6.35mm Female Y Splitter](https://www.ebay.ca/itm/1Pcs-6-35mm-1-4-Stereo-Male-to-2-X-6-35-Female-Y-Splitter-Adapter-Cable-20cm-8/262871914023?hash=item3d34631627:g:Y~MAAOSwWxNYs4KG)
* Any kind of wire

## Building the box
0. Upload the code into the Arduino Uno (if in doubt, go through this [tutorial](http://www.dummies.com/computers/arduino/how-to-upload-a-sketch-to-an-arduino/)) 
1. Using the Sharpie, trace the lower shape of the TRS jack, BNC socket, and DB-25 female on the upper part of the project box
![1](https://github.com/neurohazardous/hyperSynch/blob/master/assets/1.JPG)
2. Usign the drill, pierce the project box so that the connectors can go through
![2](https://github.com/neurohazardous/hyperSynch/blob/master/assets/2.JPG)
3. Using the drill and the cutter, cutout enough of one of the short ends of the project box so that the usb part of the Arduino peeks out of the project box
![4](https://github.com/neurohazardous/hyperSynch/blob/master/assets/4.JPG)
4. Drill the Arduino in place using a screw
![8](https://github.com/neurohazardous/hyperSynch/blob/master/assets/8.JPG)
5. Place the terminal strip on the opposite side of the Project Box with respect to the Arduino, and drill it in place
![9](https://github.com/neurohazardous/hyperSynch/blob/master/assets/9.JPG)
6. Using sandpaper, sand down any rough edges around the holes you just made
7. Using the soldering iron, solder... 
    * ~20cm of wire to [both Pin 2 and Pin 25](http://www.zytrax.com/images/rs232_db25_f.gif) (image is seen from the **front**) of each of the DB25 female connectors
    ![5](https://github.com/neurohazardous/hyperSynch/blob/master/assets/5.JPG)
    * ~20cm of wire to both the active and ground (outside one) sleeves of the 6.35mm Jack
    ![6](https://github.com/neurohazardous/hyperSynch/blob/master/assets/6.JPG)
    * ~20cm of wire to both the active and ground (outside one) sleeves of the BNC socket
    ![7](https://github.com/neurohazardous/hyperSynch/blob/master/assets/7.JPG)
8. Once all the connectors have the wires soldered to them, place them through the holes you drilled on the project box. Drill holes to put in the screws for the DB25 female connector and screw both the BNC socket and the TRS jack in place.
![3](https://github.com/neurohazardous/hyperSynch/blob/master/assets/3.jpg)
9. Connect...
    * Pin 2 of both DB25 to the Arduino's Digital Pin 6 and 7 (Active)
    * Pin 25 of both DB25 to the terminal strip (Ground)
    * Active sleeve of the TRS jack to Pin 8 
    * The ground of the TRS jack to the terminal strip
    * The active sleeve of the BNC socket to Pin 4 
    * The ground of the BNC socket to the terminal strip
    * The terminal strip to either of the Arduino's GNDs
    ![10](https://github.com/neurohazardous/hyperSynch/blob/master/assets/10.JPG)
10. Once everything is in place, close the box and use the screws to close it shut
![11](https://github.com/neurohazardous/hyperSynch/blob/master/assets/11.JPG)

## The Setup
1. Once you're done with the project box, you will need to connect...
    * Each EEG systems to one of the parallel ports (DB-25)
    * A button to the BNC input (if the button you found does not have a BNC connector, you can easily find adapters)
    * A TRS cable to a splitter. From this splitter, connect a TRS Plug 3.65mm to the audio interface you are using and the other end to the audio input of the camera you are using (you will probably need a TRS to XLR adaptor; it will depend on the input of your camera)
 2. Here are some of the images for the setup I use for my own research.
![14](https://github.com/neurohazardous/hyperSynch/blob/master/assets/14.jpg)
![15](https://github.com/neurohazardous/hyperSynch/blob/master/assets/15.jpg)


## Synching the data
The pulses in the EEG data will be saved up as event triggers. You can use this to synchronize the EEG signals from both participants using toolboxes such as EEGLAB (MATLAB) or MNE (Python). To synchronize the audio with the video, you can do such using any video editor. For us, we are interested in looking at the activity while musicians play together, so we quantify the time between the last TTL pulse and when the pianists start playing together and then correct for that in the EEG signal. 


## Testing for delays
Using an oscilloscope, we tested the delays between the TTL pulses (i.e., between the any of the output signals of the Black Box). The delay between pulses is about 5μs, which is negligible
![13](https://github.com/neurohazardous/hyperSynch/blob/master/assets/13.jpg)

## Why?
One of the biggest challenges when doing [EEG hyperscanning](http://www.sciencedirect.com/science/article/pii/S0149763412001194) (or doing EEG recordings on two or more people at the same time) is to synchronize multiple EEG systems. hyperSynch aims to present a simple and cheap solution to synchronizing multiple EEG systems with each other AND both video and audio. The idea can be extended to multiple EEG systems, but this tutorial will show how to synchronize two EEG systems + Audio + Video


## The Basic Idea
This setup lets you use a small button to send a "synchronizing" signal to x amount of EEG systems + an audio recording + video recording so that all of this data can be synchronized for offline analysis.

## Requiered knowledge/skills
* Basic handling of a soldering iron and drill
* Basic Arduino programming skills 

## The Tools
* Drill
* Cutter 
* Sand paper
* Screwdriver
* Soldering iron

## The Materials
* x1 6.35mm Jack (not [sure if this one](https://www.digikey.ca/product-detail/en/switchcraft-inc/11/SC1085-ND/109515) or [this one](https://www.digikey.ca/product-detail/en/switchcraft-inc/12A/SC1089-ND/109527)
* x1 [BNC Female Socket](https://www.digikey.ca/product-detail/en/amphenol-rf-division/31-221-RFX/ARFX1064-ND/100648) 
* x2 [DB-25 Parallel Port Female Socket](https://www.digikey.ca/product-detail/en/cw-industries/CWR-281-25-0000/CFM25G-ND/59398)
* x1 [Arduino uno](https://www.arduino.cc/en/Main/arduinoBoardUno/)
* x1 [AB USB Cable](https://www.digikey.ca/product-detail/en/qualtek/3021001-03/Q361-ND/1531288)
* x1 [Project Box](https://www.digikey.ca/product-detail/en/bud-industries/CU-1874-B/377-1165-ND/387084)
* x1 [Button]()
* x1 [Sharpie Metallic Permanent Marker](https://www.staples.ca/en/Sharpie-Metallic-Permanent-Markers-Fine-Tip-Silver-2-Pack/product_586069_1-CA_1_20001)
* x1 [Terminal Strip](https://www.digikey.ca/product-detail/en/keystone-electronics/810/36-810-ND/316822)
* Any kind of wire

## The Arduino code
The code sends 3 TTL pulses (50ms each with 500ms between them) from pins 6, 7, and 8 when the status in pin 4 (where we will connect a button) goes from high to low (pull-up resistor; you can read more about it [here](https://learn.sparkfun.com/tutorials/pull-up-resistors))

## Building the box
0. Upload the code into the Arduino Uno 
1. Using the Sharpie, trace the lower shape of the TRS, BNC, and DB-25 on the upper part of the project box
![1](https://github.com/neurohazardous/hyperSynch/blob/master/assets/1.JPG)
Format: ![Alt Text](url)
2. Usign the drill, pierce the project box so that the connectors can go through
![2](https://github.com/neurohazardous/hyperSynch/blob/master/assets/2.JPG)
3. Using the drill and the cutter, cutout enough of one of the short ends of the project box so that the usb part of the Arduino peeks out of the project box
![4](https://github.com/neurohazardous/hyperSynch/blob/master/assets/4.JPG)
4. Drill the Arduino in place using a screw
![8](https://github.com/neurohazardous/hyperSynch/blob/master/assets/8.JPG)
5. Place the terminal strip on the opposte side of the Project Box with respecto to the Arduino and drill it in place
![9](https://github.com/neurohazardous/hyperSynch/blob/master/assets/9.JPG)
6. Using the sand paper, sand any rough edges around the wholes you just made
7. Using the soldering iron, solder... 
    * ~20cm of wire to [both Pin 2 and Pin 25](http://www.zytrax.com/images/rs232_db25.gif) of each of the DB-25 Parallel Ports connectors
    ![5](https://github.com/neurohazardous/hyperSynch/blob/master/assets/5.JPG)
    * ~20cm of wire to both the active and ground sleeves of the 6.35mm Jack
    ![6](https://github.com/neurohazardous/hyperSynch/blob/master/assets/6.JPG)
    * ~20cm of wire to both the active and ground sleeves of the BNC socket
    ![7](https://github.com/neurohazardous/hyperSynch/blob/master/assets/7.JPG)
8. Once all the connectors have the wires soldered to them, place them on the wholes you drilled on the project box. Drill wholes to put in the screws for the paralell ports. For both the BNC and TRS, screw them in place. 
![3](https://github.com/neurohazardous/hyperSynch/blob/master/assets/3.JPG)
9. Connect...
    * Pin 2 of both DB-25 to Digital Pin 6 and 7 Pin 25 to the terminal strip
    * Positive sleeve of the TRS socket to Pin 8 and the GND to the terminal strip
    * Positive sleeve of the BNC socket to Pin 4 and the GND to the terminal strip
    * The terminal strip to either of the Arduino's GNDs
    ![10](https://github.com/neurohazardous/hyperSynch/blob/master/assets/10.JPG)
10. Once everything is in place, close the box and use the screws to close it shut
![11](https://github.com/neurohazardous/hyperSynch/blob/master/assets/11.JPG)

## The Setup
1. Once you're done with the project box, you will need to connect...
    * Both EEG systems to parallel ports (DB-25)
    * A TRS cable to a splitter. One will go to an audio track and the other will go to a Camera (be mindful; sometimes cameras use different audio input)
    * A button to the BNC input
 2. Click on the image to see a quick video of the setup I use
[![12](https://github.com/neurohazardous/hyperSynch/blob/master/assets/12.JPG)](https://youtu.be/-PK0s4mQaHo)

## Testing for delays
Using an oscilloscope, we tested the delays between the TTL pulses. The delay between pulses is about 5μs, which is negligible
![13](https://github.com/neurohazardous/hyperSynch/blob/master/assets/13.jpg)



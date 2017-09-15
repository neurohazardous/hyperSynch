## Why?
One of the biggest challenges when doing [EEG hyperscanning](http://www.sciencedirect.com/science/article/pii/S0149763412001194) (or doing EEG recordings on two or more people at the same time) is to synchronize multiple EEG systems. hyperSynch aims to present a simple and cheap solution to synchronizing multiple EEG systems with each other AND both video and audio. 


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
* x2 (or as many EEG systems as you want to synchronize) [DB-25 Parallel Port Female Socket](https://www.digikey.ca/product-detail/en/cw-industries/CWR-281-25-0000/CFM25G-ND/59398)
* x1 [Arduino uno](https://www.arduino.cc/en/Main/arduinoBoardUno/)
* x1 [AB USB Cable](https://www.digikey.ca/product-detail/en/qualtek/3021001-03/Q361-ND/1531288)
* x1 [Project Box](https://www.digikey.ca/product-detail/en/bud-industries/CU-1874-B/377-1165-ND/387084)
* x1 [Button]()
* x1 [Sharpie Metallic Permanent Marker](https://www.staples.ca/en/Sharpie-Metallic-Permanent-Markers-Fine-Tip-Silver-2-Pack/product_586069_1-CA_1_20001)

## The Arduino code
The code sends 3 TTL pulses (50ms each with 500ms between them) from pins 6, 7, and 8 when the status in pin 4 (where we will connect a button) goes from high to low (pull-up resistor; you can read more about it [here](https://learn.sparkfun.com/tutorials/pull-up-resistors))

## Building the box
1. Using the Sharpie, trace the lower shape of the TRS, BNC, and DB-25 on the upper part of the project box
2. Usign the drill, pierce the project box so that the connectors can go through
3. Using the sand paper, sand any rough edges around the wholes you just made
4. Using the soldering iron, solder... * bla bla

## The Setup


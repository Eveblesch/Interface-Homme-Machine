#!/bin/sh
cd Code/timebomb
make clean
make
cd ../serveur
make clean
make
cd ..
timebomb/timebomb & serveur/timebomb 

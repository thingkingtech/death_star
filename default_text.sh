#!/bin/bash

TEXT=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 32 | head -n 1)

sudo killall screen
sudo screen -dm /home/pi/rpi-rgb-led-matrix/examples-api-use/scrolling-text-example --led-rows=16 --led-chain=1 --led-scan-mode=1 --led-pwm-lsb-nanoseconds=1200 --led-slowdown-gpio=4 -f /home/pi/rpi-rgb-led-matrix/examples-api-use/fonts/9x18B.bdf $TEXT -C 255,0,0 -s 3 -y -2

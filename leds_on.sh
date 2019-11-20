#!/bin/bash

# Common path for all GPIO access
BASE_GPIO_PATH=/sys/class/gpio

if [ ! -e $BASE_GPIO_PATH/gpio19 ] 
	then
		echo "19" > $BASE_GPIO_PATH/export
		echo "out" > $BASE_GPIO_PATH/gpio19/direction
		echo "1" > $BASE_GPIO_PATH/gpio19/value
	else
		echo "out" > $BASE_GPIO_PATH/gpio19/direction
		echo "1" > $BASE_GPIO_PATH/gpio19/value
fi

if [ ! -e $BASE_GPIO_PATH/gpio25 ] 
        then
                echo "25" > $BASE_GPIO_PATH/export
                echo "out" > $BASE_GPIO_PATH/gpio25/direction
                echo "0" > $BASE_GPIO_PATH/gpio25/value
        else
                echo "out" > $BASE_GPIO_PATH/gpio25/direction
                echo "0" > $BASE_GPIO_PATH/gpio25/value
fi




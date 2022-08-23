#! /bin/bash
read input_1
read input_2
dif=$((input_1-input_2))
thresold=0

if [ $dif -le $thresold ]
	then 
	echo "Difference between the numbers is: " $((input_2-input_1))
else
	echo "Difference between the numbers is: " $((input_1-input_2))
fi

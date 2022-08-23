#! /bin/bash

read -p "Enter Number: " a
check=$((a%2))
if [ $check -eq 0 ]
     then
     echo $a is even
     else
     echo $a is odd
fi

#! /bin/bash
y=1
count=0

for ((y=2;y<=100;y++))
do 
    flag=0
    for ((i=2;i<=y-1;i++))
    do
         if [ $((y%i)) -eq 0 ]
          then
              flag=1
              break
              fi
    done
    if [ $flag -eq 0 ]
    then
        x=0
        arr[x]=$y
        ((x++))
        echo $y is prime
        ((count++))
    fi
done
echo Total prime numbers from 1 - 100 is $count
echo ${arr[@]}

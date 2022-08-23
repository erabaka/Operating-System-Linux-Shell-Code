#! /bin/bash
arr=()
for((w=0;w<5;w++))
do
   read a
   arr[w]=$a
done

max=0
min=99999

for ((i=0;i<5;i++))
do
   if [ ${arr[i]} -ge $max ]
      then
      max=${arr[i]}
   fi
   if [ ${arr[i]} -le $min ]
      then
      min=${arr[i]}
   fi
done

echo Maximum is: $max and Minimum is: $min



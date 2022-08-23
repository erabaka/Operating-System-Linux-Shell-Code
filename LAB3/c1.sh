#! /bin/bash
arr=(3 2 42 7)

max=0
min=99999

for ((i=0;i<4;i++))
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


#! /bin/bash
arr=(2 3 42 7 0 9)
x=0

for((i=0;i<6;i++))
do
   for((j=i+1;j<6;j++))
   do
      if [ ${arr[i]} -ge ${arr[j]} ]
      then
	x=${arr[j]}
        arr[j]=${arr[i]}
        arr[i]=$x
      fi
   done
done

echo "(Bubble) Sorted Array:" ${arr[@]}


#! /bin/bash
arr=()
for((w=0;w<6;w++))
do
   read b
   arr[w]=$b
done
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


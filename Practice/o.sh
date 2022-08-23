flag=0
read n
for((i=2;i<n-1;i++))
do
if [ $((n%i)) -eq 0 ]
then 
flag=1
break
else
flag=0
fi
done

if [ $flag -eq 0 ]
then
echo prime
else
echo nooo nooo noooo
fi

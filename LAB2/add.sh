						#! /bin/bash
a=40
b=2
echo $((a+b))
c=$((a+b))
echo $c
d=10.11
e=10.11
f=$d+$e
echo $f|bc
echo "scale=5;11.211/3"|bc
echo "scale=3;213.50/5"|bc
echo "2^8"|bc -l
echo "scale=3;sqrt(10)"|bc -l
echo "$((a+b))^2"|bc -l

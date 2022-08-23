#! /bin/bash
read -p "Enter a: " a
read -p "Enter b: " b
echo "Addition:" $((a+b))
echo "Subtraction:" $((a-b))
echo "Multiplication:" $((a*b))
echo "Division:" $((a/b))
echo "Mod:" $((a%b))

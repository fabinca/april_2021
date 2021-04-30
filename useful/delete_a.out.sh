#!/bin/sh
number=$1
while [ true ]  
do rm ./ex0$number/testprogram
if (($number==$2))
then break
fi
((number++))
done
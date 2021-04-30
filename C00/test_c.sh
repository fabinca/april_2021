#!/bin/bash
num=0
while [ true ]  
cd ../ex0$num
do norminette ft*
gcc main.c ft* -o a.out
./a.out | cat -e
((num++))
if (($num==9))
then break

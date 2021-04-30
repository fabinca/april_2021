#!/bin/sh
number=$1
while [ $number -le $2 ]  
do 
cd ../ex0$number
cp -r -n ~/C05_first/ex0$number/main.c ../ex0$number/main.c
norminette -R CheckForbiddenSourceHeader ft*
gcc -Wall -Werror -Wextra main.c ft*
./a.out 
echo ""
number=$(( $number + 1 ))
done
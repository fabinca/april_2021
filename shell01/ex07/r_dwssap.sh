#!/bin/sh
cat /etc/passwd | sed 's/:.*//g' | awk 'NR % 2 == 0' | rev | sort -r | awk -v b=$FT_LINE2 'NR <= b' | awk -v a=$FT_LINE1 'NR >= a' | awk {print} ORS=", " | sed 's/, $/./g'

# set FT_LINE1 and 2
#removing comments with grep and sed
#every other line with awk -done
#reversing each login with rev
#sort in reverse alphabetical order wih sort
# keep logins between FT_LINE1 and FT_LINE2 with awk -v for variable
# seperate by ' ,' - sed
# end with a '.' -sed
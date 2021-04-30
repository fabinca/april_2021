#!/bin/sh
 find . -type f,d -name '*' -printf "%f\n" | wc -l
 # wc -l = count lines
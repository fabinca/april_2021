#!/bin/sh
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'
#FT_USER=staff / student
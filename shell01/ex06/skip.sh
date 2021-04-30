#!/bin/sh
ls -l | awk 'NR % 2 == 1'
# NR is number of current record line
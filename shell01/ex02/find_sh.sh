#!/bin/sh
find . -type f -name '*.sh' -printf "%f\n" | sed 's/\.sh$//'
# sed: replace '.sh' with ''
# exec basename
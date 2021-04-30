#!/bin/sh
ifconfig -a | grep -o '..:..:..:..:..:..'
# a - all (up or down)
# o -only matching


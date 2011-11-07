#!/bin/sh

gcc "$@" -Wall -o test test.c trace.c trace.ld

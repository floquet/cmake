#!/usr/bin/env bash

# first 4 integers total to 10

EXECUTABLE=$1

OUTPUT=$($EXECUTABLE 1 2 3 4)

if [ "$OUTPUT" = "10" ]
then
    exit 0
else
    exit 1
fi

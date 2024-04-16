#!/bin/bash

# Remove old executable
if [ -e run ]; then
    rm run
fi

# Compile command
g++ -Wno-enum-compare -I eigen -I EigenRand main.cpp -o run

# If compiled successfully, run
if [ $? -eq 0 ]; then
    ./run
fi

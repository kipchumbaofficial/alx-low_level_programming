#!/bin/bash
gcc -c -fpic -fPIC *.c
gcc -shared -o liball.so *.o

#!/bin/bash
gcc -fPIC -c *.c
gcc *.o -shared
mv a.out liball.so

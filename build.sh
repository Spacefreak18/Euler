#!/bin/bash

cd lib

## Create dynamic shared library
gcc -std=c99 -pedantic -Wall -c -fPIC euler.c -o euler.o
gcc -shared -o libeuler.so euler.o

## compile specified problem

cd ..
cd $1

gcc -std=c99 -pedantic -Wall -I../lib -L../lib -Wall -o "$1".bin "$1".c -leuler -lm

## run the specified problem
cd ..

./run $1



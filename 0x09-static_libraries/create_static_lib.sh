#!/bin/bash
for CFILES in ./*.c
do
gcc -c $CFILES
done
for OFILES in ./*.o
do
ar -rc $OFILES
done
exit 0
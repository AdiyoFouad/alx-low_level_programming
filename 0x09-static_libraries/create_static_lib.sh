#!/bin/bash
gcc -Wall -Wextra -Werro -pedantic -c ./*.c
ar -rc liball.a ./*.o

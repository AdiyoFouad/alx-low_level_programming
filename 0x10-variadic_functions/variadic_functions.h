#ifndef VARIADIC_FUNCTIONS_H_INCLUDED
#define VARIADIC_FUNCTIONS_H_INCLUDED

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

#endif

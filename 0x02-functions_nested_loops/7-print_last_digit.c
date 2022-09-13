#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @n: the number for which we want print the last digit
 * Return the value of the last digit of n
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
		return (-(n % 10));
	else
		return (n % 10);
}

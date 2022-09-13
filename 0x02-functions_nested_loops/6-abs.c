#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: the parameter of the function
 * Return: the absolute value of n
 */


int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

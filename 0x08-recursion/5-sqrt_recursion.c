#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: parameter
 * Return: natural root of n
 */

int _sqrt_recursion(int n)
{
	int m;

	if ( n < 0 )
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		m = n--;
		if (m * m == n && m >= 2)
			return (m);
		else
			return (_sqrt_recursion(m));
	}
}

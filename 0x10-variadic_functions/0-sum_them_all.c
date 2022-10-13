#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 1; i <= n; i++)
			sum += va_arg(ap, int);
		va_end(ap);

		return (sum);
	}
	return (n);
}

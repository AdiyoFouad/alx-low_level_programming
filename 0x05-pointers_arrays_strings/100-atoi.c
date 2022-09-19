#include "main.h"

/**
 * _atoi - function that convert a string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int number, i, j, l;
	char c;
	char *n;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	l = 0;
	for (j = 0; j <= i; j++)
	{
		c = *(s + j);
		if (c == '-' || c == '+')
		{
			if (l == 0)
			{
				*n = c;
				l = 1;
			}
			else
				break;
		}
		if ((c >= '0' && c <= '9'))
		{
			*(n + l) = c;
			l++;
		}
		else if (l > 1)
		{
			break;
		}
	}
	return (n);
}


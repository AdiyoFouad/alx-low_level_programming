#include "main.h"

/**
 * _atoi - function that convert a string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i, j, n, s;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	n = 0;
	s = 1;
	for (j = 0; j <= i; j++)
	{
		c = *(s + j);
		if (c == '-')
		{
			s *= -1;
		}
		else if(c >= '0' && c <= '9')
		{
			n = n * 10 + (c - '0');
		}
		else
		{
			break;
		}
	}
	
	return (s * n);
}


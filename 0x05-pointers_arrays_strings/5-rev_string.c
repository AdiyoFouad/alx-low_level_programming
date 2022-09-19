#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char *str;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	str = s;

	j = 0;
	while (i >= 0)
	{
		*(str + j) = *(s + i);
		j++;
		i--;
	}

	s = str;
		

}

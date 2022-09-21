#include "main.h"

/**
 * string_toupper - change all lowercase character of a string to uppercase
 * @str: paramter
 * Return: str to uppercase
 */

char *string_toupper(char *str)
{
	int i;
	char c;

	i = 0;
	c = *str;
	while (c)
	{
		if (c >= 'a' && c <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
		c = *(str + i);
	}
	return (str);
}

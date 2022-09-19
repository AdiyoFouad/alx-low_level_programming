#include "main.h"

/**
 * puts22 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		_putchar(c);
		i += 2;
		c = *(str + i);
	}
	_putchar('\n');
}

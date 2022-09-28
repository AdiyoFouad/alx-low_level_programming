#include "main.h"

/**
 * _puts_recursion - function that print a string following by a new line
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!s)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

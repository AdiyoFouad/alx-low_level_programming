#include "main.h"

/**
 * _print_rev_recursion - function that print a string in reverse
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	_puts_recursion(s + 1);
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
	}
}

#include "main.h"

/**
 * _isdigit - functions that check for digit character
 * @c: the character
 * Return: 1 if c is uppecase overwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

#include "main.h"

/**
 * _islower - function tht checks forlowercase character
 *
 * Return: 1 if c is lowercs else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}

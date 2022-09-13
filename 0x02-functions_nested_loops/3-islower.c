#include "main.h"

/**
 * _islower - function that checks forlowercase character
 *@c: is the int that will be used as the parameter of the function
 * Return: 1 if c is lowercs else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

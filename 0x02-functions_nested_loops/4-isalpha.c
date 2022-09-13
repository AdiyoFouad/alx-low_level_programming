#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *@c: is the int that will be used as the parameter of the function
 * Return: 1 if c is lowercs else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

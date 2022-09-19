#include "main.h"

/**
 * _strlen - function that return the lenght of a string
 * @s: the string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;

	return (i);
}

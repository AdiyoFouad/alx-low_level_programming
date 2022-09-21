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

/**
 * _strncpy - function that copies the string pointed by src, included the
 * teminate null byte (\0), to the buffer pointed to by dest
 * @dest: the first parameter
 * @src: second prameter
 * @n: bytes from src that the function will use
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ld, ls, nn;

	ld = _strlen(dest);
	ls = _strlen(src) - 1;

	if (n <= 0)
		return (dest);
	n --;

	if (n > ls)
		n = ls;
	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		n--;
	}

	nn = ld - n;
	if (nn > 0)
	{
		while (nn > 0)
		{
			*(dest + ls + nn) = '\0';
			nn--;
		}
	}
	return (dest);
}

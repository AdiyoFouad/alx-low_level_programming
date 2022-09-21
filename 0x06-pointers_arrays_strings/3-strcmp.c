#include "main.h"

/**
 * _strcmp - function that compare two strings
 * @s1: first string
 * @s2: second string
 * Return: negative int if s1 < s2, 0 if matching or positive int else
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

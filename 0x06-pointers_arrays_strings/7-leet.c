#include "main.h"

/**
 * leet -function that encodes a string into 1337
 * @s: parameter of the function
 * Return: s encode into 1337
 */

char *leet(char *s)
{
	int i, j, l;
	char *letters = "aAeEoOtTlL";
	char *code = "43071";

	i = 0;
	while (*(s + i))
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(letters + j))
				*(s + i) = *(code + (j / 2));
		}
		i++;
	}
	return (s);
}

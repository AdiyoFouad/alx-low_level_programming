#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @str: the string
 * Return: str with it's words capitalized
 */

char *cap_string(char *str)
{
	int i, j;
	char s[] =  {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (str[i - 1] == s[j])
				{
					str[i] -= 32;
				}
			}
		}
		i++;
	}

	return (str);
}

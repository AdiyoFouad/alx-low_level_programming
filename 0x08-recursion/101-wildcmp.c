#include "main.h"

/**
 * check - checker
 * @a: first parameter
 * @b: second parameter
 * @i: iterrator
 * Return: 1 or 0
 */
int check(char *a, char *b, int i)
{
	if (*(a + i) != *(b + i) && *(b + i) != '*')
		return (0);
	if (*(a + i) == *(b + i) || *(b + i) == '*')
	{
		if (*(a + i) == '\0' && *(b + i) == '\0')
			return (1);
		return (check(a, b, i + 1));
	}
}
/**
 * wildcmp - function that compares two strings
 * @s1: first string
 * @s2: second string that can cointain * which replace any string
 * Return: 1 if matching 0 ortherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0));
}

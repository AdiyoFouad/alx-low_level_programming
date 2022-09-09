#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (j = 65; j < 91; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

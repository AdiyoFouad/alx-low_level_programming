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

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}

#include <stdio.h>

/**
 * main - prints the 50 first fibonnacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long j, k, f, m, s, l, p, h1, h2;

	j = 1;
	k = 2;
	printf("%lu, %lu, ", j, k);
	for (i = 0; i <= 91; i++)
	{
		f = j + k;
		printf("%ld, ", f);
		j = k;
		k = f;
	}
	m = j / 10000000000;
	l = j % 10000000000;
	s = k / 10000000000;
	p = k % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		h1 = m + s;
		h2 = s + p;
		if (l + p > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
		{
			printf(", ");
		}
		m = s;
		l = s;
		s = h1;
		p = h2;
	}
	printf("\n");
	return (0);
}

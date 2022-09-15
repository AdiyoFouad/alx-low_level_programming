#include <stdio.h>

/**
 * main - program that prints either number
 * or Fizz or Buzz or FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return (0);
}

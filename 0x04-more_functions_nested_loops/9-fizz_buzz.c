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
	
	for (i = 1; i <= 100; i++)
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
			printf("%d", i);
		}
	}
	return (0);
}

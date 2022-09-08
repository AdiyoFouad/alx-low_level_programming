#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 **/
int main(void)
{
	print("Size of a char: %ld byte(s)\n", sizeof(char));
	print("Size of a int: %ld byte(s)\n", sizeof(int));
	print("Size of a long int: %ld byte(s)\n", sizeof(long int));
	print("Size of a long long int: %ld byte(s)\n", sizeof(long long));
	print("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

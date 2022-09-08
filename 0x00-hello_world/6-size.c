#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 **/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	print("Size of a char: %ld byte(s)\n", sizeof(c));
	print("Size of a int: %ld byte(s)\n", sizeof(i));
	print("Size of a long int: %ld byte(s)\n", sizeof(li));
	print("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	print("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

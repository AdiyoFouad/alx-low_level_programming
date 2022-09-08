#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 **/
int main(void)
{
	print("Size of a char: %d byte(s)\n",sizeof(char));
	print("Size of a int: %d byte(s)\n",sizeof(int));
	print("Size of a long int: %d byte(s)\n",sizeof(long int));
	print("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	print("Size of a float: %d byte(s)\n",sizeof(float));
	return (0);
}

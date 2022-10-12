#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function to use
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

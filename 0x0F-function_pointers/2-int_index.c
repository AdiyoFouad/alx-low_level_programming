#include "function_pointers.h"

/**
  *int_index - searches for an integer.
  *@array: array of integers.
  *@size: number of elements in array.
  *@cmp: pointer to function used to compare values.
  *
  *Return: index of first element.
  *-1 if no element is found or siz <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	r = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (r);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				r = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (r);
			}
		}

	}
	return (r);
}

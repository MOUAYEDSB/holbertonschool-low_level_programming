#include "function_pointers.h"

/**
 *int_index - calling a function to compare an array of integers
 *@array: a pointer
 *@size: an integer
 *@cmp: a function
 *Return: value of i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}

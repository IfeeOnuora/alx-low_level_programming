#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: integer position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	int x;

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return x;
	}
	return (-1);
}

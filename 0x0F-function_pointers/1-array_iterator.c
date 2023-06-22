#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes the a functon given
 * as a parameter on each element of an array
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array == NULL || action == NULL || size == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

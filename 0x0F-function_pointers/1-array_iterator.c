#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

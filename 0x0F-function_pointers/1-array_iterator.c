#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator- a fuction that executes a function given as parameter
 * on each element of the array
 * @size: the size of the array
 * @action: a pointer to the function
 * @array: the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;
	
	if (array == NULL || action == NULL || size == 0)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

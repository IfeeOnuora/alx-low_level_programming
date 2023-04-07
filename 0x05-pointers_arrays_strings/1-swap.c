#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 *
 * @a: the parameter to be swapped
 * @b: the parameter to be swapped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}

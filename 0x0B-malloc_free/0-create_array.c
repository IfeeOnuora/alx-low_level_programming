#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initilizes it with specific char
 *
 * @size: memory area being pointed to
 * @c: specific char
 *
 * Return: pointer to x.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *x;
	
	if (size == 0)
		return (NULL);
	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);
	else
	{
		for (y = 0; y < size; y++)
		{
			x[y] = c;
		}
		return (x);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function tat returns a pointer to a newly allocated
 * space in memory.
 *
 * @str: parameter
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int x;

	for (x = 0; str[x] != '\0'; x++)
		count++;
	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	else
		for (x = 0; str[x] != '\0'; x++)
			copy[x] = str[x];
	return (copy);
}


#include "main.h"

/**
 * _strlen - afunction that returns length of string
 *
 * @s: the holder of the value
 *
 * Retun: s.
 */
int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}

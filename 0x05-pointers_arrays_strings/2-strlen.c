#include "main.h"

/**
 * _strlen - a function that returns length of string
 *
 * @s: the holder of the value
 *
 * Return: s
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

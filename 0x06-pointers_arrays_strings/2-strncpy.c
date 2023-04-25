#include "main.h"
/**
 * _strncpy - a function that copies a string
 * without the strncpy
 *
 * @dest: the destination
 * @src: the source string
 * @n: the specified number to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}


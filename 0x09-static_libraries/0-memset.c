#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory
 * area pointed to by s with const byte b
 *
 * @s: memory area being pointed to
 * @b: constant bytes
 * @n: number of bytes
 * 
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

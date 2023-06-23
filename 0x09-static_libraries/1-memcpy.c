#include "main.h"

/**
 * _memcpy - function that copies n bytes from the memory area source
 * to memory area destination
 *
 * @src: source
 * @dest: destination
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

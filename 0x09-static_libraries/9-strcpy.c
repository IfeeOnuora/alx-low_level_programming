#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte(\0), to the buffer pointed to by 
 * dest
 *
 * @src: a pointer to a string
 * @dest: destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

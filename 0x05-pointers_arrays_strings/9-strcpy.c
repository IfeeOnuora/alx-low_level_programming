#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 *
 * @dest: pointer to buffer that will store copied string
 * @src: pointer to dest buffer
 *
 * Return: pointer to dest buffer
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	for (x = 0; src[x] != '\0'; ++x)
	{
		*dest = *src;
	}
	dest[x] = '\0';
	return (dest);
}

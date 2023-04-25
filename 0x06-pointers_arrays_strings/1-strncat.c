#include "main.h"
/**
 * _strncat - a function that concatenates strings
 * without using strncat
 *
 * @dest: the destination
 * @src: the source
 * @n: the number needed to append
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while(dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while(src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return(dest);
}

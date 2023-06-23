#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: whatever
 *
 * Return: number of bytes n, the initial segment of s,
 * which consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				break;
			}
		}
		if (!(*s == accept[x]))
			break;
		bytes++;
		s++;
	}
	return (bytes);
}

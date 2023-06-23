#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string
 * @needle: whatever
 *
 * Return: a pointerto the byte in s, thatmatches one of the bytes in 
 * accept, or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do
			{
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			}while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}

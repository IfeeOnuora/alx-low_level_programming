#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: parameter passed
 *
 * Return: 0.
 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	char y;

	for (i = 0; s[i] != '\0'; i++)
		c++;
	for (i = c - 1; i >= c / 2; i--)
	{
		y = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = y;
	}

}

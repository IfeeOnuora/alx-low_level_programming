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

	for (i = 0; s[i] != '\0'; i++)
		c++;
	i = c - 1;
	while(i >= 0)
		i--;
}

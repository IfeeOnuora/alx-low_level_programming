#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: function parameter
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	int j, c = 0;

	for (j = 0; s[j] != '\0'; j++)
		c++;
	for (j = c; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

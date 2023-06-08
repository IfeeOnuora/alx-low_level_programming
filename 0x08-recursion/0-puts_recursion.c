#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * using recursion, followed by a new line.
 *
 * @s: the parameter passed to the function
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}


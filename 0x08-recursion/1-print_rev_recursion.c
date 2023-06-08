#include "main.h"

/**
 * _print_rev_recursion - a function that prints a function 
 * in reverse using recursion, floowed by a new line
 *
 * @s: the parameter to be passed to the function
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}

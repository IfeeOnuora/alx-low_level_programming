#include "main.h"

/**
 * _strlen_recursion - a function that returns the function of
 * a string.
 *
 * @s: the parameter passed to the function.
 *
 * Return: 0 when successful.
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s++)
		count += _strlen_recursion(s);
	else
		count--;
	return (count);
}

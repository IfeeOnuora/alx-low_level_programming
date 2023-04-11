#include "main.h"

/**
 * puts2 - a functions that prints every other charcter
 *
 * @str: parameter passed to the function
 *
 * Return: void.
 */
void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
		if (d % 2 == 0)
		_putchar(str[d]);
	}
	_putchar('\n');
}

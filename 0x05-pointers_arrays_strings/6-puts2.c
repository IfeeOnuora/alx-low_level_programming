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
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}

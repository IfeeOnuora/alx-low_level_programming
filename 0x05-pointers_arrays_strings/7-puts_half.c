#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 *
 * @str: function parameter
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int j, len = 0;

	for (j = 0; str[j] != '\0'; j++)
		len++;
	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
		_putchar('\0');
	}
	else if (len % 2 != 0)
	{
		for (j = (len - 1)/ 2; str[j] != '\0'; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
	_putchar('\n');
}

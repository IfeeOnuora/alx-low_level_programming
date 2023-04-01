#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * @n: number of times line will be printed
 * Return: 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}



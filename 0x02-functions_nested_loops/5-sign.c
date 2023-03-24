#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1 if n is greater than 0
 * otherwise, return 0 if n is equal to zero
 * or return -1 if n is less than 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

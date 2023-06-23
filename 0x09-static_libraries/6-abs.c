#include "main.h"

/**
 * _abs - prints the absolute the value of an integer
 *
 * @a: integer to be printed
 *
 * Return: 0 if success
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

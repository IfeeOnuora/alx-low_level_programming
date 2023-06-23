#include "main.h"

/**
 * _isupper - a function that checks for uppercase letters
 *
 * @c: the character to be checked
 *
 * Return: 1 is success, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

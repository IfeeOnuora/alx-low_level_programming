#include "main.h"
/**
 * _isalpha - checks for char alphabet
 * @c: the char to be checked
 * Return: 1 if char is letter lower or upper, otherwise 0
 */
int _isalpha(int c)
{
	if ((char c >= 'a' && c <= 'z') || (char c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

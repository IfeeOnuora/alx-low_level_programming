#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a unction that prints a name
 *
 * @name: the name to be printed
 * @f: a pointer to a function that prints a name
 * 
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

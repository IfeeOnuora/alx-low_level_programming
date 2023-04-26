#include "main.h"
/**
 * _strcmp - a function that comparestwo strings
 *
 * @s1: one of the strings
 * @s2: the other string to be compared
 *
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	for (int x = 0; s1[x] != '\0' ||  s2[x] != '\0'; i++)
	{
		if (s1[x] == s2[x])
		{
			return (0);
		}
		else
		{	
			return (s1[x] - s2[x]);
		}
	}
}

#include <stdio.h>

/**
 * main - prints lowercase alphabet except q & e
 *
 * Return: 0 if successful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');

	return (0);
}

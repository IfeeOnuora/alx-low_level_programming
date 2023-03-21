#include <stdio.h>

/**
 * main - prints numbers with putchar function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}

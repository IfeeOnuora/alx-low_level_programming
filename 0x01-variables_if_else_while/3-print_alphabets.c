#include <stdio.h>

/**
 * main- prints alphabet in lowercase and uppercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - write a program that prints alphabet in lower case
 *
 * Return: 0 is sucess
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers
 *
 * Return: 0 when success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}

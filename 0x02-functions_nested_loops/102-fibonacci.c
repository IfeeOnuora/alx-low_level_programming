#include <stdio.h>
/**
 * main - prints fibonacci 1st 50 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int result = 0;
	int number = 50;
	int i;

	for (i = 0; i <= number; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%d, \n", result);
	}
	printf("\n");
	return (0);
}

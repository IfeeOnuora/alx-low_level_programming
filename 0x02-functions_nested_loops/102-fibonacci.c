#include <stdio.h>
/**
 * main - prints fibonacci 1st 50 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int number = 50;
	int x;

	printf("%d, ", a);
	for (x = 0; x < number; x++)
	{
		printf("%d, ", b);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

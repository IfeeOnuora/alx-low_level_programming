#include <stdio.h>
/**
 * main - prints fibonacci 1st 50 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;
	int number = 50;
	int x;

	printf("%lu, ", a);
	for (x = 0; x < number; x++)
	{
		printf("%lu, ", b);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

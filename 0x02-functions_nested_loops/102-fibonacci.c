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
	for (x = 1; x < number; x++)
	{
		if (x == 49)
		{
			printf("%lu", b);
		}
		else
		{
			printf("%lu, ", b);
			sum = a + b;
			a = b;
			b = sum;
		}
	}
	printf("\n");
	return (0);
}

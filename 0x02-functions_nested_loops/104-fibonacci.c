#include <stdio.h>
/**
 * main - print sum of even Fib nums>4mil
 *
 * Return: 0 on success
 */
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

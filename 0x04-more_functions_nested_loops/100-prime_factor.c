#include <stdio.h>
#include <math.h>

/**
 * main - Prints largest prime number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x;
	long maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
	if (num % x == 0)
	{
		maxf = num / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}

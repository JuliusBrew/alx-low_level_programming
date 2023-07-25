#include "main.h"

/**
 * print_number - Prints a number
 * @n: number to print
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;

	if (x != 10)
	{
		print_number(x);
		_putchar((unsigned int) n % 10 + '0');
	}
}

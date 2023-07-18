#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to print
 * Return: Always (Success)
 *
 */

int print_last_digit(int n)
{
	int ld;

	if ((n % 10) < 0)
	{
		ld = (n % 10) * -1;
	}
	_putchar(ld + '0');
	return (ld);
	_putchar('\n');
}

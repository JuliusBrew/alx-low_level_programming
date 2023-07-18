#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to print
 * Return: Always (Success)
 *
 */

int print_last_digit(int n)
{
	if ((n % 10) < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return (n % 10);
	}
	_putchar('\n');
}

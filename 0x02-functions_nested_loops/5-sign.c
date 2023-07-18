#include "main.h"

/**
 * print_sign - returns +, 1 if argument is > 0
 * @n: The character to print
 * Return: Always (Success)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _islower - returns 1 if alphabet is lower case
 * Return: Always (Success)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	_putchar('\n');
}

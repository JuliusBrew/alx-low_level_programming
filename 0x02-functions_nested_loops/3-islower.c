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
		return 1;
	}
	else
	{
		return 0;
	}
	_putchar('\n');
}

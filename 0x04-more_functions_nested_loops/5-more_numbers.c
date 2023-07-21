#include "main.h"

/**
 * more_numbers - check the code.
 * Return: success
 */

void more_numbers(void)
{
	int x;
	int y = 11;

	while (--y)
	{
	for (x = 0; x <= 14; x++)
	{
		if (x > 9)
			_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
	}
}

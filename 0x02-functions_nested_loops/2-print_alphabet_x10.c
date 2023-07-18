#include "main.h"

/**
 * main - Prints alphabet in lower case 10 times
 * Return: Always (Success)
 *
 */

void print_alphabet_x10(void)
{
	char a;
	int x;

	for (x = 0; x <= 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

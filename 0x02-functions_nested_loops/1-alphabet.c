#include "main.h"

/**
 * main - Prints alphabet in lower case
 * Return: Always (Success)
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
#include "main.h"

/**
 * print_diagonal - prints a line corresponding to your input
 * @n: line parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j, k;

	k = n;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('\\');

		for (j = i; j <= k; j++)
		{
		if (j == n)
		{
			_putchar('\n');
			k++;
		}
		else
		{
		_putchar(' ');
		}
		}
	}
	}
	_putchar('\n');

}


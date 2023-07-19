#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all nuatural number from 0 - 98
 * @n: number to count from
 * Return: Always (Success)
 *
 */

void print_to_98(int n)
{
	int x;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (x = n; x > 97; x--)
		{
			printf("%d, ", x);
			if (x == 98)
				printf("%d\n", x);
		}
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d, ", x);
			if (x == 98)
				printf("%d\n", x);
		}
	}
}

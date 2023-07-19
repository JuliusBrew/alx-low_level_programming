#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * Return: Always (Success)
 *
 */

int main(void)
{
	int x; int tr = 0;

	for (x = 0; x <= 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			tr = tr + x;
	}
	printf("%d\n", tr);

	return (0);
}

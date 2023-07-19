#include "main.h"
#include <stdio.h>

/**
 * main - fibonacci
 * Return: Always (Success)
 *
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, total = z;

	while (z + y < 4000000)
	{
	z += y;
	if (z % 2 == 0)
		total += z;
	y = z - y;
	++x;
	}
	printf("%ld\n", total);

	return (0);
}

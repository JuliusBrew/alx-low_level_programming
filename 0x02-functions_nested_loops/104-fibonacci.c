#include "main.h"
#include <stdio.h>

/**
 * main - fibonacci
 * Return: Always (Success)
 *
 */

int main(void)
{
	int num;
	unsigned long x = 0, y = 1, total;
	unsigned long x_1, x_2, y_1, y_2;
	unsigned long _1, _2;

	for (num = 0; num < 92; num++)
	{
	total = x + y;
	printf("%lu, ", total);
	x = y;
	y = total;
	}
	x_1 = x / 10000000000;
	y_1 = y / 10000000000;
	x_2 = x % 10000000000;
	y_2 = y % 10000000000;

	for (num = 93; num < 99; num++)
	{
	_1 = x_1 + y_1;
	_2 = x_2 + y_2;
	if (x_2 + y_2 > 9999999999)
	{
	_1 += 1;
	_2 %= 10000000000;
	}
	printf("%lu%lu", _1, _2);
	if (num != 98)
		printf(", ");
	x_1 = y_1;
	x_2 = y_2;
	y_1 = _1;
	y_2 = _2;
	}
	printf("\n");
	return (0);
}

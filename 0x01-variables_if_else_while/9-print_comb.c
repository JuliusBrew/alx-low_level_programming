#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of single digits using putchar
 * Return: Success
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');

		if (x != 9)
			putchar(',');
			putchar(' ');
		x++;
	}
	putchar('\n');

	return (0);
}

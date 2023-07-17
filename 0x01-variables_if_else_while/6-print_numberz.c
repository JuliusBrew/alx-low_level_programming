#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the numbers in base 10 using putchar
 * Return: Success
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}

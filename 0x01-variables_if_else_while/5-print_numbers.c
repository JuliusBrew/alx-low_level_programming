#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the numbers in base 10
 * Return: Success
 */

int main(void)
{
	int x = 0;

	while (x <= 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");

	return (0);
}

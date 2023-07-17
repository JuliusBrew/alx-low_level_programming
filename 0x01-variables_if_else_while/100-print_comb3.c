#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of two digits using putchar
 * Return: Success
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');

				if (x == 8 && y == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}

		}
	}

	return (0);
}

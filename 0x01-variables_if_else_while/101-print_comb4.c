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
			for (z = y + 1; z <= 9; z++)
			{
				if ((x != y)!= z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');

					if (x == 7 && y == 8)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}

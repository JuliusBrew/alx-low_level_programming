#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints numbers of hex
 * Return: Success
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			char hChar = 'a' + (num - 10);

			putchar(hChar);
		}
	}
	putchar('\n');

	return (0);
}

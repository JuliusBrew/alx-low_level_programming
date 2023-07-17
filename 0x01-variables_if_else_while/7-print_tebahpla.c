#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabets in lower case
 * Return: Success
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet != 'a' - 1)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}

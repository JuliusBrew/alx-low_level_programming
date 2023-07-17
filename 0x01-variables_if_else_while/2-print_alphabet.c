#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabets in lower case
 * Return: Success
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet != 'z' + 1)
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}

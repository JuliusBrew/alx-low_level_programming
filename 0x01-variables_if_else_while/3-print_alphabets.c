#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabets in lower case
 * Return: Success
 */

int main(void)
{
	char a = 'a', A = 'A';

	while (a != 'z' + 1)
	{
		putchar(a);
		a++;
	}
	while (A != 'Z' + 1)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}

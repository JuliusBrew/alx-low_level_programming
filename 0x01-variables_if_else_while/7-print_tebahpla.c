#include <stdio.h>
#include <stdlib.h>

/**
 * main - print reversed lower case alphabet
 * Return: Success
 */

int main(void)
{
	char rev;
	for (rev = 'z'; rev >= 'a'; rev--)
	putchar(rev);
	putchar('\n');
}

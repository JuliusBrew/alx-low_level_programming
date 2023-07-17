#include <stdio.h>
#include <stdlib.h>

/**
 * main - print reversed lower case alphabet
 * Return: Success
 */

int main(void)
{
	for (char rev = 'z'; rev >= 'a'; rev--)
	putchar(rev);
	putchar('\n');
}

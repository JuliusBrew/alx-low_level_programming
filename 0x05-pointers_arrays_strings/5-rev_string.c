#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int word = 0;
	int a = 0;
	int z = word - 1;

	while (s[word] != '\0')
	{
	word++;
	}

	while (a < z)
	{
	char hold = s[a];

	s[z] = hold;
	a++;
	z--;
	}
}

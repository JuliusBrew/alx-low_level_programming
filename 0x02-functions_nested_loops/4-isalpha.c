#include "main.h"

/**
 * _isalpha - returns 1 if argument is lower case or uppercase
 * @c: the character to check
 * Return: Always (Success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

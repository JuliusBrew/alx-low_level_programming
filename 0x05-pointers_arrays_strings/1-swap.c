#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: number to swap
 *@b: number to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

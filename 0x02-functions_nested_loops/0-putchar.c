#include "main.h"

/**
 * main - Prints _putchar
 * Return: Always (Success)
 *
 */

void strgout(const char* str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
}

int main(void)
{
	const char *text = "_putchar";

	strgout(text);
	_putchar('\n');

	return (0);
}

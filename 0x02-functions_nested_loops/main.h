#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * strgout - strgout iterates through the str argument and outputs an array of chars
 * Return: void
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

void print_alphabet_x10(void)
{
        char a;
        int x;

        for (x = 0; x <= 10; x++)
        {
                for (a = 'a'; a <= 'z'; a++)
                {
                        _putchar(a);
                }
                _putchar('\n');
        }
}

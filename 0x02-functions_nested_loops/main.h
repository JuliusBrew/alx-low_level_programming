#ifndef MAIN_H
#define MAIN_H

int _putchar(char c)

void strgout(const char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
#endif

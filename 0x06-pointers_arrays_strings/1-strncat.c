#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes fron src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
        int first = 0, dest_len = 0;

        while (dest[first++])
        dest_len++;
        for (first = 0; src[first] && first < n; first++)
        dest[dest_len++] = src[first];
        return (dest);
}

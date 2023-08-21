#include <stdio.h>

/**
 * _strlen - String length
 * @str: string to be used
 * Return: Length of the string
 */

size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}

#include "main.h"

/**
 * isdigit - xhecks if a character is a digit
 * @n: number to be checked
 * Return: 1 for a digit and 0 for anything else
 */

int _isdigit(int n)
{
if (n >= 48 && n <= 57)
{
return (1);
}
return (0);
}

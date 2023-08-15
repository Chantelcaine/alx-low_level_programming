#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @n: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int n)
{

if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
{
return (1);
}
return (0);
}

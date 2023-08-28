#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
int i, n;

for (i = 0; s[i] != '\n'; i++)
{
for (n = 0; accept[n] != '\n'; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (NULL);
}

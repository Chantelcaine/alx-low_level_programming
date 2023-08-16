#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
int i, z = 0;

while (i < 1024)
{
if ((i % 10) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}

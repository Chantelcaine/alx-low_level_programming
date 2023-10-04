#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args
 * @argc: count
 * @argv: vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: First integer
 * @b: Second integer
 * Return: null
 */

void swap_int(int *a, int *b)
/*The function that swaps the integer*/
{
int temp = *a;
*a = *b;
*b = temp;
}

#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}

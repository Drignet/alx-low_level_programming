#include "main.h"

/**
 * more_numbers - function that prints 10x the numbers
 * Return: 10x numbers
 *
 */

void more_numbers(void)
{
int m, n;
for (m = 0; m < 10; m++)
{
for (n = 0; n < 15; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
_putchar('\n');
}

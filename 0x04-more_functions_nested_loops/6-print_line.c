#include "main.h"

/**
 * print_line - function that draw straight line
 * @n: number of times the character _ be printed
 *
 * Result: straight line
 *
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (n = 0; n < 10; n++)
{
_putchar('_');
}
}
_putchar('\n');
}

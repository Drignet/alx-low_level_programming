#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: -  a function that prints 10 times the alphabet
 * on a new line
 *
 * Return: x10 a-z
 *
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}

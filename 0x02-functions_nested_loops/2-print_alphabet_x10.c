#include "main.h"

/**
 * print_alphabet_10x -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
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

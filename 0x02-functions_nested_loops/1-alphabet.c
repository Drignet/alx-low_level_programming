#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
char l_alpha;

for (l_alpha = 'a' ; l_alpha <= 'z' ; l_alpha++)
{
_putchar(l_alpha);
}
_putchar('\n');

return (0);
}

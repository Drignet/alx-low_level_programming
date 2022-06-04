#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
char m;
int n;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (m = 'a'; m < 'g'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}

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
for (m = 'z'; m >= 'a'; m--)
{
putchar(m);
}
putchar('\n');
return (0);
}

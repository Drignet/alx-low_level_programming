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
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
if (i == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
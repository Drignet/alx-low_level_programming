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
for (char i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

for (char j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');

return (0);
}

#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of char: %zu bytes\n", sizeof(c));
printf("Size of int: %zu bytes\n", sizeof(i));
printf("Size of long int: %zu bytes\n", sizeof(li));
printf("Size of long long int: %zu bytes\n", sizeof(lli));
printf("Size of float: %zu bytes\n", sizeof(f));

return (0);
}

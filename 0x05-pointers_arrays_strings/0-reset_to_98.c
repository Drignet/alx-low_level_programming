#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int
 * as parameter and update to ,98
 *@*n: pointer
 *Return:value 98
 *
 */

void reset_to_98(int *n)
{
int n;
int *pn = &n;

n = 98;
printf("%d", *pn);
}

#include "main.h"
/**
 * reverse_array - reverses arrays contents
 * @a: array
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int p, q, res;

	for (p = 0; p < n - 1; p++)
	{
		for (q = p + 1; q > 0; q--)
		{
			res = *(a + q);
			*(a + q) = *(a + (q - 1));
			*(a + (q - 1)) = res;
		}
	}
}

#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square root of a number
 *
 *@n: Number
 *
 * Return: -1 if n not natural square
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_sqrt_recursion(n, root));
}

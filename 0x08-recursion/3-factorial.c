#include "main.h"

/**
 * factorial - function that returns factorial of a number
 * @n: number
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return n * factorial(n - 1);
}

#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @p: integer input
 * Return: Absolute value of p
 *
 */

int _abs(int p)
{
return (p * ((p > 0) - (p < 0)));
}

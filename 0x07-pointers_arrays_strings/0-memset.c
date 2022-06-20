#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: filled byte
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(s + m) =  b;

	return (s);
}

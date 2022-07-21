#include "main.h"
/**
 * _strncpy - string copy
 * @dest: copy to
 * @src: source.
 * @n: bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}

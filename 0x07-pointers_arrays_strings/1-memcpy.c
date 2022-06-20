#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: store area
 * @src: source
 * @n: filled byte
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(dest + m) =  *(src + m);

	return (dest);
}

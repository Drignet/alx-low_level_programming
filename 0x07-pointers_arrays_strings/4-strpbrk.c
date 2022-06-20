#include "main.h"

/**
 * _strpbrk - searches a string for byte
 * @s: string1
 * @accept: string2
 * Return: a pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
				return (s + m);
		}
	}
	return ('\0');
}

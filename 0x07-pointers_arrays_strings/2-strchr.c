#include "main.h"
/**
 * _strchr - function that locates character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first character of string
 */
char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	for (; *(s + m) != '\0'; m++)
		if (*(s + m) == c)
			return (s + m);
	if (*(s + m) == c)
		return (s + m);
	return ('\0');
}

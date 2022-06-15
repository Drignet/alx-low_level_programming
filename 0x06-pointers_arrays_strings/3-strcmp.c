#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * others Otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, cp = 0;

	while (cp == 0)
	{
		if ((*(s1 + n) == '\0') && (*(s2 + n) == '\0'))
			break;
		cp = *(s1 + n) - *(s2 + n);
		i++;
	}

	return (cp);
}

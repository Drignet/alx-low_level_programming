#include "main.h"

/**
 * _strlen - function that returns lenght of strings
 * @s: string
 * Return: lenght of string
 *
 */

size_t _strlen(const char *s)
{
size_t len = 0;

while (*s++)
len++;

return (len);
}

#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @dest: dest string to append to
 * @scr: scr string that will append to dest string
 * Return: a pointer to the resuslting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);

#include "main.h"

/**
 * _puts - function that prints a string
 * @str: String variable
 * Return: void
 *
 */

void _puts(char *str)
{
	while (*str)
		_puts(*str++);

	_puts('\n');
}

#include <stdio.h>
/**
 * main - prints number
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 Always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

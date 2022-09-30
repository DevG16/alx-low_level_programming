#include <stdio.h>
#include "main.h"

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: Array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}

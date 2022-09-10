#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)

	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}

#include <unistd.h>

/**
 * prints _putchar, followed \n
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

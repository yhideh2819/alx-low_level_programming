#include <unistd.h>

/**
 * _putchar - write character to print c to stdout
 * @c: char to be printed
 * Return: 0n success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

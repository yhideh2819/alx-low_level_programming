#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to to 9
 * description: prints the numbers excluding 2 and 4
 * Return: the nubers from 0 up to 9
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}

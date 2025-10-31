#include "main.h"

/**
 * print_square - square and #
 * @size: size of the square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int E = size;
	int n = size;

	if (n <= 0)
	{
	_putchar('\n');
	}

	while (n > 0)
	{
		for (E = size; E > 0; E--)
		{
		_putchar('#');
		}
	_putchar('\n');

	n--;
	}
}

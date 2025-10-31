#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: numbers of printed '\'
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int I = n;
	int E = n;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		for (E = n; E < I; E++)
		{
		_putchar(32);
		}
	_putchar('\\');
	_putchar('\n');

	n--;
	}
}

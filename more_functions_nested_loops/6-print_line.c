#include "main.h"

/**
 * print_line - my first drawing !!
 * @n: numbers of "_"
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	char ch = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (n > 0)
		{
			_putchar(ch);
			n--;
		}
		_putchar('\n');
	}
}

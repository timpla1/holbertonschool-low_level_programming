#include "main.h"

/**
 * more_numbers - a function that prints 10 times numbers from 0 to 14 (\n)
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c;
	int i;

	for (i = '0'; i < 10; i++)
	{
		for (c = '0'; c <= 14; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}

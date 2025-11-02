#include "main.h"

/**
 * print_alphabet_x10 - 10time the alphabet i bet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n;
	char EEE;

	for (n = 0; n < 10; n++)
	{
	for (EEE = 'a'; EEE <= 'z'; EEE++)
	{
	_putchar(EEE);
	}
	_putchar('\n');
	}
}

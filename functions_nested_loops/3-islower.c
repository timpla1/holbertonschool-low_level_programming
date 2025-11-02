#include "main.h"

/**
 * _islower - check uppercase and lower's one
 * @c: upper or lower case """ramdomly"""
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}

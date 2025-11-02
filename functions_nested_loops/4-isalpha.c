#include "main.h"

/**
 * _isalpha - check uppercase and lower's one
 * @c: upper or lower case """ramdomly"""
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

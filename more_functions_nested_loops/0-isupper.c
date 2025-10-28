#include "main.h"

/**
 * _isupper - prevent from conflict.
 * c - put an 'A' and an 'a'
 *
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	if (c >= 'a' && c <= 'z')
	{
	return (0);
	}
	return (0);
}

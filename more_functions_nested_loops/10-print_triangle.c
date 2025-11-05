#include "main.h"

/**
 * print_triangle - putchar's triangles like no one else
 * @size: size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int IMO = size;
	int h = size;
	int UH = size;

	while (size > 0)
	{
	size--;

		for (UH = size; UH > 0; UH--)
		{
		_putchar(' ');
		}
		for (h = IMO; h > size; h--)
		{
		_putchar('#');
		}


		_putchar('\n');


	}
	if (IMO == 0)
	{
	_putchar('\n');
	}
}

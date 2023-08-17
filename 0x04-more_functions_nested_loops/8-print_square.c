#include "main.h"

/**
 * print_square - print a square usint the character #
 *
 * @size: is the size of square
 *
 * Return always 0 success
 */

void print_square(int size)
{
	int row, colum;

	colum = 0;
	if (size < 1)
		_putchar('\n');
	while (colum < size)
	{
		row = 0;
		while (row < size)
		{
			_putchar('#');
			row++;
		}
		_putchar('\n');
		colum++;
	}

}

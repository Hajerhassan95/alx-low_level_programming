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

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}

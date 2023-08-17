#include "main.h"

/**
 * print_diagonal - print a digonal line
 *
 * @n: is the number of time the \ character
 *          should be printed
 *
 * Return: always 0 success
 */

void print_diagonal(int n)
{
	int slash, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space <= slash; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

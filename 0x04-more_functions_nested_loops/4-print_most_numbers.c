#include "main.h"

/**
 * print_most_numbers - print all numbers
 *      from 0 to 9 except 2 and 4
 *
 * Return: always 0 success
 */

void print_most_numbers(void)
{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50)
		{
			if (ch != 52)
			{
				_putchar(ch);
			}
		}
	}
	_putchar('\n');
}

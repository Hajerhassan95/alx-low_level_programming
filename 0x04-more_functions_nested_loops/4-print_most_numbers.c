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
for (ch = 0; ch <= 9; ch++)
{
if (ch == 2 || ch == 4)
continue;
_putchar(ch + 48);
}
_putchar('\n');
}

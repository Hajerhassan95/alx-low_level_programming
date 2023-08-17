#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *
 * Return: always 0 success
*/

void print_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
_putchar(ch);
}
_putchar('\n');
}

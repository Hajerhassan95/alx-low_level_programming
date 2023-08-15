#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
int n;
for (n = 0; n <= 9; n++)
{
for (int ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putcha('\n');
}
}

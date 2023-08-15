#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                the alphabet  from a - z
*/

void print_alphabet(void)
{
int n = 97;
while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
return (0);
}

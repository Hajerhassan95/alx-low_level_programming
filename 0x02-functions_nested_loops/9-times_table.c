#include "main.h"

/**
 * times_table - print the 9 times table
 *
*/

void times_table(void)
{
int line, mult, res;
for (line = 0; line <= 9; line++)
{
_putchar(48);
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
res = line * mult;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + 48);
_putchar((res % 10) + 48);
}
_putchar('\n');
}
}

#include <stdio.h>

/**
 * main - entry point
 *
 * description: the if statement program
 *
 * Return: 0 (Success)
*/

int main(void)
{
int digit1 = 0, digit2, digit3, digit4;
while (digit1 <= 9)
{
digit2 = 0;
while (digit2 <= 9)
{
digit3 = 0;
while (digit3 <= 9)
{
digit4 = 0;
while (digit4 <= 9)
{
if (digit1 != digit2 && digit1 != digit3 &&
digit1 != digit4 &&
digit2 != digit3 &&
digit2 != digit4 &&
digit3 != digit4)
{
putchar(digit1 + 48);
putchar(digit2 + 48);
putchar(' ');
putchar(digit3 + 48);
putchar(digit4 + 48);
if (digit3 + digit4 != 18)
{
putchar(',');
putchar(' ');
}
}
digit4++;
}
digit3++;
}
digit2++;
}
digit1++;
}
putchar('\n');
return (0);
}

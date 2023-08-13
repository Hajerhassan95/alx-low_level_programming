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
int digit1 = 0;
while (digit1 <= 0)
{
int digit2 = 0;
while (digit2 <= 9)
{
if (digit1 != digit2 && digit1 < digit2)
{
putchar(digit1 += 48);
putchar(digit2 += 48);
if (digit1 + digit2 != 17)
{
putchar(',');
putchar(' ');
}
}
digit2++;
}
digit1++;
}
return (0);
}

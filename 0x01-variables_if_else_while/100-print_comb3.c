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
int digit = 48;
while (digit <= 57)
{
int digit2 = 49;
while (digit2 <= 57)
{
putchar(digit2);
digit2++;
}
putchar('\n');
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}

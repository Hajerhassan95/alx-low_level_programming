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
int digit = 0;
while (digit <= 9)
{
int digit2 = 1;
while (digit2 <= 9)
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

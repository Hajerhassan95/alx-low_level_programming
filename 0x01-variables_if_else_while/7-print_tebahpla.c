#include <stdio.h>

/**
 * main - entry point
 *
 * description: the while statement program
 *
 * Return: 0 (Success)
*/

int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
	putchar(ch);
	ch++;
}
putchar('\n');

return (0);
}

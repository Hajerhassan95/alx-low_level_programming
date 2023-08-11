#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints alphabet lower and upper case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
char cH = 'A';


while (ch <= 'z')
{
putchar(ch);
ch++;
}

while (cH <= 'Z')
{
putchar(cH);
cH++;
}
putchar('\n');

return (0);
}


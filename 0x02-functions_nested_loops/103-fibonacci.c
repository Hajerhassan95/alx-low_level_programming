#include "main.h"

/**
 * main - entry point
 *
 * description: prints the sum of the even values
 *
 * Return: always 0 (success)
*/

int main(void)
{
float total;
unsigned long n1 = 0, n2 = 1, sum;

while (1)
{
sum = n1 + n2;

if (sum > 4000000)
	break;

if ((sum % 2) == 0)
total += sum;

n1 = n2;
n2 = sum;
}
printf("%.0f\n", total);

return (0);
}

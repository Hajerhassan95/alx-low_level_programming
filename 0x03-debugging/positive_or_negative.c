#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints the positive or
 *       negative numbers
 *
 * @i: input
 *
 * Return: always 0 (Success)
*/

void positive_or_negative(int i)
{

srand(time(0));
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);

}

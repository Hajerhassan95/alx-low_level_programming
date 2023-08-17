#include <stdio.h>

/**
 * main - entry point
 *
 * description: print the largest prime factor
 *
 * Return: always 0 success
 */

int main(void)
{
	long prime = 612852475143, divi;

	while (divi < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divi = 3; divi < (prime / 2); divi += 2)
		{
			if ((prime % divi) == 0)
				prime /= divi;
		}
	}
	printf("%ld\n", prime);
	return (0);
}

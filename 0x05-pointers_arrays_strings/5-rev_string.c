#include "main.h"

/**
 * rev_string - function that print
 * dtring in reserve
 *
 * @s: pointer that point to the variable
 *
 * return: nothing
 */

void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int count = 0;


	while  (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

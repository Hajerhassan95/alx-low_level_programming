#include "main.h"

/**
 * _isupper - prints upper and lower letters
 *
 * @c: input
 *
 * Return: always 0 success
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}

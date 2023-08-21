#include "main.h"

/**
 * swap_int - function that swap two integers
 *
 * @a: is pointers that point for variable a
 *
 * @b: is pointer that point for variable b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

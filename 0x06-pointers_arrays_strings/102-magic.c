#include <stdio.h>

/**
 * main - entry point
 *
 * description: function thta print the element
 *
 * Return: always 0 success
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
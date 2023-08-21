#include "main.h"

/**
 * print_rev - function that print in
 * reserve
 *
 * @s: pointer that point for variabe
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	for (*s = '\0'; (*s > s[0]); s--)
	{
		_putchar(*s + 0);
	}
	_putchar('\n');
}

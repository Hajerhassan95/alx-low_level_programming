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
	char *end = s; 
	while (*end != '\0')
	{
		end++;
	}
	while (end != s)
	{
		end--;
		_putchar(*end);
	}
	_putchar('\n');
}

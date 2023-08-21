#include "main.h"
#include <string.h>

/**
 * _strlen - function that print the length of
 * string
 *
 * @s: pointer that point to variable
 *
 * Return: always 0 success
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; *s != '\0'; s++)
		++size;
	return (size);
}

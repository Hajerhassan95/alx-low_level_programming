#include "main.h"

/**
 * char *_strcpy - function that copies the string
 *
 * @dest: pointer that point to the variable
 *
 * @src: pointer that point to the variable
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{

		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);

}

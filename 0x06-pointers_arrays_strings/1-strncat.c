#include "main.h"

/**
 * _strcat - concatenates tow strings
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: size of array
 *
 * Return: void
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	dest[i] = '\0';
	return (dest);
}

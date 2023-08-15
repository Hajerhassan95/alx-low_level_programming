#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *                    both lowercase or uppercase
 *
 * @c: takes input fro other functions.
 *
 * Return: return 1 if c is letter
 *          otherwise return 0 (success)
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
return (0);
}

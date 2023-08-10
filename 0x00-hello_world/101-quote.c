#include <unistd.h>

/**
 * main - entry point
 *
 * description: program prints the faliure result
 *
 * Return: 1 (Not Success)
*/

int main(void)
{
char qout[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, qout, 59);
return (1);
}

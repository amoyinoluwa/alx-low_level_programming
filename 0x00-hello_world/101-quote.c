#include <unistd.h>
#include <stdio.h>
/**
 * main - program contents
 *
 * Return: return value
 */

int main(void)
{
	write(1, "and that piece of art is useful\"", 32);
	write(2, " - Dora Korpar, 2015-10-19", 27);
	freopen("/dev/null", "w", stderr);
	return (1);
}

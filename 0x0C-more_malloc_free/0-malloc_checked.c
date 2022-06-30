#include "main.h"
/**
 * malloc_checked - allocates memory for size of b
 * @b: size of memory to be allocated
 * Return: pointer to new memry
 */

void *malloc_checked(unsigned int b)
{
	void *mem;
	
	mem = malloc(b * sizeof(b));
	if (mem)
	{
		return (mem);
	}
	exit(98);
}

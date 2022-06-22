#include "main.h"
/**
 * _pow_recursion - evaluates x^y
 * @x: int x
 * @y: int y
 * Return: prints x^y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		if (y < 0)
		{
			return (-1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}

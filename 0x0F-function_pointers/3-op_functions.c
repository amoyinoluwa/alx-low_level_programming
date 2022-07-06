#include "3-calc.h"
/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first int
 * @b: second int
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: first int
 * @b: second int
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first int
 * @b: second int
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus operator
 * @a: first int
 * @b: second int
 * Return: a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

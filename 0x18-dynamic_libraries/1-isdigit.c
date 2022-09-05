#include "main.h"
/**
 * _isdigit - function to check if a number is a digit
 * @c: number argument
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

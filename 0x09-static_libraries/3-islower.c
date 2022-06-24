#include "main.h"
/**
 * _islower - function to check if a character is a lower case
 * @c: character argument
 * Return: 0 or 1
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}

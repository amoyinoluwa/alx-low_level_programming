#include "main.h"
/**
 * _isupper - checks if a letter is upper
 * @c: letter argument
 * Return: 1 or 0
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

#include "main.h"
/**
 * _isalpha - function that checks if a character is an alphabet
 * @c: character argument
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}

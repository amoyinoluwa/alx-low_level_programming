#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @num: argument
 * Return: Last digit of num
 */

int print_last_digit(int i)
{
	return (i <= 0 ? _putchar(((i * -1) % 10) + '\0') : _putchar((i % 10) + '\0'));
}

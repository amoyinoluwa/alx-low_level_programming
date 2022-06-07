#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @num: argument
 * Return: Last digit of num
 */

int print_last_digit(int num)
{
	return (num <= 0 ? putchar('0'+ ((num * -1) % 10)) : putchar('0'+ (num % 10)));
}

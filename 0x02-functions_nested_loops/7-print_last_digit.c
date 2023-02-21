#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @n: integer to get last digit of
 *
 * Return: value of last digit
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

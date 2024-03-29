#include <stdio.h>
#include "main.h"

/**
 * print_binary - func that prints the binary equivalent of a decimal number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)

{
	int i, count = 0;
	unsigned long int torrent;

	for (i = 63; i >= 0; i--)
	{
		torrent = n >> i;

		if (torrent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

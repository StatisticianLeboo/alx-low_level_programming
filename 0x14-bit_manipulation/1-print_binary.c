#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int number.
 * @n: The unsigned long int number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1; /* shift the mask right by 1 bit */
	}
}

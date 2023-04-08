#include "main.h"

/**
 * print_binary - will convert number to binary
 * @n: the variable
 * Return: void
 */

void print_binary(unsigned long int n) 
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}

/**
 * print_num_binary -  Prints the binary representation of a number
 * @n: Number to convert binary
 * Return: void
 */
void print_num_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_num_binary((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

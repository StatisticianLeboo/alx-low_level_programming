#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @index: is the index reference
 * @n: is the pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index > sizeof(8) * 8)
		return (-1);

	number &= ~(1 << index);

	*n = number;

	return (1);
}

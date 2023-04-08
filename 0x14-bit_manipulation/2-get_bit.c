#include "main.h"

/**
 * get_bit - will extract the bit value
 * @n is the variable
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	return (n >> index) & 1;
}

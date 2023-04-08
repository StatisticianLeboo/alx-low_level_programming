#include "main.h"

/**
 * get_bit - will extract the bit value
 * @n: is the variable
 * @index: is the index value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	/*multiple loops to iterate number to the right index*/
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}

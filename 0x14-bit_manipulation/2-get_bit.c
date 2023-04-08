#include "main.h"

/**
 * get_bit - will give value of a bit at a given index
 * @n: variable to check the value of
 * @index: The index to look for the number
 * Return: A value at a given index or -1 if an error occoured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	/*this loop will run until the number to the right index*/
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}

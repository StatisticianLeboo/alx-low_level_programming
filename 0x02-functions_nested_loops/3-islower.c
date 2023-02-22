#include "main.h"
/**
 * _islower - to check if alphabet is lower case
 *
 * @c: parameter that will be checked
 *
 * Return: 1 if lower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

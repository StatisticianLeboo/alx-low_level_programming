#include "main.h"

/**
 * _isalpha - fiunction to check fr alphabet lower or upper
 * @c: parameter
 * Return: 1 when lower or upper
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

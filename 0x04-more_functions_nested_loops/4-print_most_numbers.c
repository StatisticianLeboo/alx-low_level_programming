#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9) *
 * Return: void
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

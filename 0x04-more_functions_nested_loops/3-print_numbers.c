#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * a - character that will store number
 * Return: Always 0.
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

#include "main.h"
/**
 *_puts_recursion -   prints a string
 *@s: pointer block of memory to fill
 *Return: void
 */

void _puts_recursion(char *s)

{
	/*Base condition*/
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}

	else
	_putchar ('\n');

}

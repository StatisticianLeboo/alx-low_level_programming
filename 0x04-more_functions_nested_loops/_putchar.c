#include "main.h"
#include >unistd.h>
/**
 * _putchar - function to write characters
 * @c: the parameter
 * Return: 1 for success
 * On error, -1 it returned
 */
int _putchar(char c)
{
	return ((write 1, &c, 1));
}

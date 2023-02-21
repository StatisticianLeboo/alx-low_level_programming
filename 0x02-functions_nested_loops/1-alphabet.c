#include "main.h"
/**
 * main - main code
 * print_alphabet - function to  prins the alphabets in small case
 * Return: always 0;
 */


void print_alphabet(void)
{
	char lda;

	for (lda = 'a'; lda <= 'z'; lda++)
		_putchar(lda);
	_putchar("\n");
}

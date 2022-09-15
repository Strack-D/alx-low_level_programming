#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabets ten times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int ten;
	char ch;

	for (ten = 0; ten < 10; ten++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
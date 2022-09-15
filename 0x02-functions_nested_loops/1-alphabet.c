#include "main.h"
#include <stdio.h>

/**
 * main - print the alphabets ten times
 *
 * Return: Always 0
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_rev - to print the characters of a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i])
		i++;

	while(i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

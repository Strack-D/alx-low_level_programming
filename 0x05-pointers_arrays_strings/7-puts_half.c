#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int no;

	while (str[i])
		i++;
	if (i % 2 == 0)
		no = i / 2;
	else if (i % 2 != 0)
		no = (i - 1) / 2;
	while (no)
	{
		if (no == i)
			break;
		_putchar(str[no]);
		no++;
	}
	_putchar('\n');
}

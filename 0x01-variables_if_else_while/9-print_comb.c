#include <stdio.h>

/**
 * main - to print out numbers zero to nine
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int no = 48;

	while (no < 58)
	{
		if (no == 57)
			continue;
		putchar(no);
		no++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print out numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int no = 48;
	
	while (no < 58)
	{
		putchar(no);
		no++;
	}
	putchar('\n');
	return (0);
}

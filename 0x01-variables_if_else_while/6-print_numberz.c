#include <stdio.h>

/**
 * main - print out numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int no = 0;
	
	while (no < 10)
	{
		putchar(no);
		no++;
	}
	putchar('\n');
	return (0);
}

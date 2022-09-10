#include <stdio.h>

/**
 * main - print numbers 1-9
 * Return: Always 0 (success)
 */
int main(void)
{
	int no;
	
	for (no = '0'; no <= '9'; no++)
	{
		putchar((no % 10) + '0');
		if (no == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	return (0);
}

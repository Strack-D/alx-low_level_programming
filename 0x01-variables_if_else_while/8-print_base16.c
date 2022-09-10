#include <stdio.h>

/**
 * main - print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	char no = '0';

	for (; no <= '9'; no++)
		putchar(no);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar("\n");
	return(0);
}

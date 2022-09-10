#include <stdio.h>

/**
 * main - print integers in base ten
 * Return: Always 0 (success)
 */
int main(void)
{
	char ten;

	for (ten = 1; ten < 10; ten++)
		putchar(ten);
	putchar('\n');
	return (0);
}

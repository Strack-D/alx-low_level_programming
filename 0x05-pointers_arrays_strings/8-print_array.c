#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array of integers
 * @a: this is the array
 * @n: number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == 4)
			break;
		printf(", ");
		i++;
	}
}


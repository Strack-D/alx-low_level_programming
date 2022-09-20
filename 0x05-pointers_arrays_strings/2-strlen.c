#include "main.h"

/**
 * _strlen - to get the length of a string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

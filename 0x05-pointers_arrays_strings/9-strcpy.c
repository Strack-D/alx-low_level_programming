#include "main.h"

/**
 * *_strcpy - copy the string pointed to
 * @dest: new variable
 * @src:string to be copied
 * Return: pointer to the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

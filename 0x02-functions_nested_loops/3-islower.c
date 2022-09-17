#include main.h

/**
 * _islower - test if a character is a lowercase alphabet or not
 *
 * @c: character to test
 * Return: 1 if the character is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

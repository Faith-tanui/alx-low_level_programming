#include "main.h"
/**
 * _islower - checks whether the character is lower case.
 * @c: checks if the character is lower case
 * Return: 1 and c
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

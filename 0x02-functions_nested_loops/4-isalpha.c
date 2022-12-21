#include "main.h"
/**
 * _isalpha - a function that checks for an alphabetic character
 * @c: Parameter to be passed through the function
 * Return: 1 if is a letter and 0 if character is not a letter
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

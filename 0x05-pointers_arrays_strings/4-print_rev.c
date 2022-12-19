#include "main.h"
/**
 * print_rev - a function to print a string in reverse
 * @s: parameter to be passed through the function
 */
void print_rev(char *s)
{
	int j, k;

	k = 0;
	while (s[k] != '\0')
		k++;

	for (j = k-1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}


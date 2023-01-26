#include "main.h"
/**
 * _puts - function to print a string
 * @str: a parameter
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * main - Entry point
 * print_alphabet() - print the alphabets in lower case
 *Return: 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}


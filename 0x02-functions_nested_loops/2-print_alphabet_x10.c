#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the lower case alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int num = 0;

	while (num++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');

	}
}

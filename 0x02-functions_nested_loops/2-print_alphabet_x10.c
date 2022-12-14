#include <main.h>
/**
 * main - Entry point
 * Description -printing out the alphabet 10 times in lower case
 */
void print_alphabet_x10(void)
/**
 * print_alphabet_x10() - prints the alphabet 10 times in lower case
 *
 */
{
	char ch;
	int num = 0;

	while (num <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');

	}
}

#include <main.h>
/**
 * main - Entry point
 * Description -printing out the alphabet 10 times in lower case
 * Return: 0
 * print_alphabet() -prints the alphabet 1 times in lowercase
 *
 */
void print_alphabet_x10(void)
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

#include <stdio.h>
/**
 * main -Entry point
 * Description - This program prints the alphabets
 *in lowercase and then in upper case
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}

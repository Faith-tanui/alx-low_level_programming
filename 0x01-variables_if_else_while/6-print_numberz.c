#include <stdio.h>
/**
 * main - Entry point
 * Description - Printing out all the single digit numbers of base 10 starting
 * from 0 using only function putchar()
 * Return: 0
 */
int main(void)
{
	char ci;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

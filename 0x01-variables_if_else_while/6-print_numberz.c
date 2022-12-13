#include <stdio.h>
/**
 * main - Entry point
 * Description - Printing out all the single digit numbers of base 10 starting
 * from 0 using only function putchar()
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

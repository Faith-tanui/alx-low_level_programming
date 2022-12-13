#include <stdio.h>
/**
 * main - Entry point
 * Description - print all the numbers to base 16
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= 16; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

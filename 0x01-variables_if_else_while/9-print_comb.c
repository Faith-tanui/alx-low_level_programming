#include <stdio.h>
/**
 * main - Entry point
 * Description - Patience, persistennce and perspiration make an
 * unbeatable combination for success
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

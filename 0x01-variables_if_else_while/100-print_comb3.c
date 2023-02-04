#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 is always succesful
 */

int main(void)
{
	int num1;
	int num2;


	for (num1 = 0; num1 <= 8; num1++)
	{

		for (num2 = 1; num2 <= 9; num2++)

			if (num1 < num2)

			{

				putchar(num1 + '0');

				putchar(num2 + '0');

				putchar(',');

				putchar(' ');


			}

	}

	putchar('\n');

	return (0);
}

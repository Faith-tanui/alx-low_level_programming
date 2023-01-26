#include <stdio.h>
/**
 * print_to_98 - function to prnt all natural
 * numbers to 98
 * @n: the parameter to be passed through the function
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

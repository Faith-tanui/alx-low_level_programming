#include <stdio.h>
/**
 * main - Entry point
 * Description- using function putchar to print alphabet in lower case
 * Return: 0 (Always sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
		putchar(ch);
	return (0);
}

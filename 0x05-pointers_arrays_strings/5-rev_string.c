#include "main.h"
/**
 * rev_string - function to reverse a string
 * _putchar - function that prints one character at a time
 * @s: parameter that is passed through the function
 * Return: 0
 *
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char ch;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)

	{
		ch = s[j];
		s[j] = s[k];
		s[k] = ch;
	}
}

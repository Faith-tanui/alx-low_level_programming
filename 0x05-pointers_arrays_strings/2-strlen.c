#include "main.h"
/**
 * _strlen - function to check the length of a string
 * @s: parameter 
 */
int _strlen(char *s)
{
	int len;

	while(*s != '0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
;

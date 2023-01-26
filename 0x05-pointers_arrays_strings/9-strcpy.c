#include "main.h"
/**
 * _strcpy - copy a string pointed to by src to the buffer
 * pointed to by dest
 * @dest: parameter to check
 * @src: the parameter to check
 * Return: 0
 *
 */
char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

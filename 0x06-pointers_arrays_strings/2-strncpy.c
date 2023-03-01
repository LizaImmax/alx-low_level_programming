#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string.
 * @dest : string destination
 * @src : string source
 * @n: number of char to copy over
 *
 * Return: dest edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}

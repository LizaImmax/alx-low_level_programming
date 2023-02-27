#include "main.h"

/**
 * print_rev - function that prints a string.
 * followed by a new line
 * fcounter is to first count to end, n is to count back
 * @s : string input
 *
 * Return: a string, in reverse, followed by a new line.
 */

void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - function that pirints half of a string
 * The function should print the second half of the string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 *
 * Return: Half of the output
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

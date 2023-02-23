#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * You can only use _putchar function to print
 *@n: line lenghth
 * Return : a straight line in the terminal.
 */

void print_line(int n)
{
	int line;

	if (n >= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

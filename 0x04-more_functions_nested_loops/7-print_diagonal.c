#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int lo, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lo = 1; lo < n; lo++)
		{
			for (sp = 1; sp < lo; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int line, space;

		for (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (line = 1; line <= n; line++)
			{
				for (space = 1; space < line; space++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
}

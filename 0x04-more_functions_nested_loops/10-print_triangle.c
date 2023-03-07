#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * You can only use _putchar function to print
 *@size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 *
 * Return : a triangle, followed by a new line.
 */

void print_triangle(int size)

	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

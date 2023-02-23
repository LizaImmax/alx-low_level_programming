#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers
 *
 * Return :  10 times the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i >= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10);
			}
			_putchar(i % 10);
		}
		_putchar('\n');
	}
}

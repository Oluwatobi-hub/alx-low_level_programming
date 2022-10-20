#include "main.h"

/**
 * print_most_numbers - print most number from 0 to 9 with a new line
 * Return: void
 */
void print_most_numbers(void)
{
	chra b;

	for (b >= '0'; b <= '9'; b++)
	{
		if (!(b == '2' || b == '4'))
		_putchar(b);
	}
	_putchar('\n');
}

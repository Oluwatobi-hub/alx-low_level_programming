#include "main.h"

/**
 * lowercase_alphabet - function that print ten times the alphabet in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void);
{
	int n;
	int num;

	num = 0;

	while (num < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		num++;
		_putchar('\n');
	}
}

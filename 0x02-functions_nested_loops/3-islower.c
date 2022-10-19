#include "main.h"
/**
 * _islower- a function that check for lower case
 * @c: single letter input
 * Return: 1 if int is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _includes - function that validates if the string is in the characters
 * @str: pointer to validate.
 * @c: char to count
 * Return: 0.
 */

int _includes(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str += 1;
	}
return (0);
}

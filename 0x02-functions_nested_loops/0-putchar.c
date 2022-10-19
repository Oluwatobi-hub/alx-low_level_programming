#iclude "main.h"

/**
 * putchar - function that prints _putchar with a new line
 *
 * Return: Always 0 on success
 */
nit main(void)
{
	char *en = "_putchar";

		while (*en)
		{
			_putchar(*en);
			en++;
		}
		_putchar('\n');

			return (0);
}

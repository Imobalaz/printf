#include "main.h"

/**
 * print_string - prints string
 * @list: list of arguments passed
 * @looper: loops
 * Return: 6 
 */
int print_string(va_list list, int *looper)
{
	int i = 0;
	char *arg;

	while (i <= *looper)
	{
		arg = va_arg(list, char *);
		i++;
	}

	*looper = *looper + 1;

	i = 0;
	if (arg != NULL)
	{
		while (arg[i])
		{
			putchar(arg[i]);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}

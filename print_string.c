#include "main.h"

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

int print_int(va_list list, int *looper)
{
	int count = l, m = 0;
	unsigned int n = 0;
	int i = 0;

	while (i <= *looper)
	{
		n = va_arg(list, int);
		i++;
	}

	*looper = *looper + 1;

	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursion_int(m);
	return (count);
}

int print_binary(va_list list, int *looper)
{
	unsigned int x = 0;
	int b = 0, new = 0;
	int i = 0;

	while (i <= *looper)
	{
		new = va_arg(list, int);
		i++;
	}

	*looper = 5;
	x = new;

	if (new < 0)
	{
		_putchar('l');
		new = new * -1;
		x = new;
		b += 1;
	}

	while (x > 0)
	{
		x = x / 2;
		b++;
	}

	recursion_bin(new);
	return (b);
}

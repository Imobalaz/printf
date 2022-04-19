#include "main.h"

/**
 * print_binary - function that prints a binary from an integer input
 *
 * @list : arguments passed into _printf()
 *
 * @looper : pointer to loop_helper in format_checker()
 *
 * Return: number of characters printed
 */

int print_binary(va_list list, int *looper)
{
	int x, b, new, i;

	x = 0;
	b = 0;
	new = 0;
	i = 0;

	while (i <= *looper)
	{
		new = va_arg(list, int);
		i++;
	}

	*looper += 1;
	x = new;

	if (new < 0)
	{
		_putchar('1');
		new *= -1;
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

/**
 * recursion_bin - A function that prints a binary number by recursion
 *
 * @a : the number to be converted
 *
 * Return: void
 */

void recursion_bin(int a)
{
	int t;

	t = a;

	if (t / 2)
		recursion_bin(t / 2);
	_putchar(t % 2 + '0');
}

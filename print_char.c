#include "main.h"

/**
 * print_char - function that prints a character
 *
 * @list : the list of arguments passed into _printf()
 *
 * @looper : a pointer that stores the address of loop_helper in format_checker
 *
 * Return: 1
 */

int print_char(va_list list, int *looper)
{
	char character;
	int i;

	i = 0;
	while (i <= *looper)
	{
		character = va_arg(list, int);
		i++;
	}

	*looper += 1;
	_putchar(character);
	return (1);
}

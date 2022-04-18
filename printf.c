#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that prints and is supposed to act like the printf
 *
 * @format : string with the format of what is to be printed
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int counter;

	va_list list;
	va_start(list, format);
	counter = format_checker(format, list);
	va_end(list);

	return (counter);
}

/**
 * format_checker - function that checks the format string
 *
 * @format : the format string
 *
 * @list : list of args passed into the _printf function
 *
 * Return: the number of characters printed
 */

int format_checker(const char *format, va_list list)
{
	int i;
	int loop_helper;
	int counter;

	i = 0;
	counter = 0;
	loop_helper = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (1);
			i++;

			if (character_checker(format[i]))
			{
				counter += selector(format[i], list, &loop_helper);
			}
		}
		else
		{
			counter += _putchar(format[i]);
			i++;
		}
	}

	return (counter);
}

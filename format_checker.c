#include "main.h"

int format_checker(const char* format, va_list list)
{
	int count = 0;
	int i = 0;
	int loop_helper = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;

			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				count += _putchar(format[i]);

			if  (check_if_is_specifier(format[i] == 0)
					{
					count = print_if_not_specifier(format[i - 1], format[i], count);
					}
					else
					count += print_if_specifier(format[i], list, &loop_helper);
					}
					else
					{
					count += _putchar(format[i]);
					}
					i++;
					}
					return (count);
					}

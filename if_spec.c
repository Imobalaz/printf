#incude "main.h"

/**
 * print_if_specifier - a function that implements different functions for spec
 *
 * @format : the specifier
 *
 * @list : list of args passed into _printf()
 *
 * @looper : pointer to loop_helper in format_checker()
 *
 * Return: the number of characters printed
 */

int print_if_specifier(char format, va_list list, int *looper)
{
	int i, length;

	i = 0;
	length = 0;

	ph_str specifier_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{NULL,NULL}
	};

	while (specifier_list[i].placeholder)
	{
		if (*specifier_list[i].placeholder == format)
			length = specifier_list[i].f(list, looper);

		i++;
	}

	return (length);
}

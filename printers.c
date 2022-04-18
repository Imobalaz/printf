#include "main.h"

/** print_character - function that prints a character
 *
 * @list - the list of args passed into _printf()
 *
 * looper - helps to iterate the list
 *
 * Return: number of characters printed
 */

int print_character(va_list list, int *looper)
{
	int c;
	int i;

	i = 0;
	while (i <= *looper)
	{
		c = va_arg(list, int);
		i++;
	}

	*looper += 1;

	return _putchar(c);
}

/**
 * print_string - function that helps to print string
 *
 * @list : args passed into _printf()
 *
 * looper : helps to iterate the list
 *
 * Return: the number of characters printed
 */

int print_string(va_list list, int *looper)
{
	char *s;
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (i <= *looper)
	{
		s = va_arg(list, char *);
		i++;
	}
	*looper += 1;

	i = 0;
	while (s[i])
	{
		counter += _putchar(s[i]);
		i++;
	}

	return (counter);

}

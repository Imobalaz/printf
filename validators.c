#include "main.h"

/**
 * character_checker - a function that checks if a character is a placeholder or not
 *
 * @c : the character ot be checked
 *
 * Return: 1 if it is a placeholder or 0 if it is not
 */

int character_checker(char c)
{
	char para[] = {'c', 's'};
	int i;

	for(i = 0; i < 2; i++)
	{
		if (para[i] == c)
			return (1);
	}

	return (0);
}

/**
 * selector - a function that selects a function to run for each placeholder character.
 *
 * @c : the placeholder characer
 *
 * @list : the list of args passed into the _printf function
 *
 * @looper : helps in iterating the list
 *
 * Return: the number of characters printed
 */

int selector(char c, va_list list, int *looper)
{
	chars_def func_array[] = {
		{'c', print_character},
		{'s', print_string}
	};
	int i;

	for (i = 0; i < 2; i++)
	{
		if (func_array[i].character == c)
			return func_array[i].f(list, looper);
	}

	return (0);
}

#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
typedef struct chars
{
	char character;
	int (*f)(va_list list, int *looper);
} chars_def;

int _putchar(char c);
int print_character(va_list list, int *looper);
int print_string(va_list list, int *looper);
int selector(char c, va_list list, int *looper);
int character_checker(char c);
int format_checker(const char *format, va_list list);
int _printf(const char *format, ...);

#endif

#include "main.h"

void recursion_int(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		recursion_int(t / 10);
	_putchar(t % 10 + '0');
}

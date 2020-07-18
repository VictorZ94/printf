#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

void printchar(va_list args)
{
	char c;
	c = va_arg(args, int);
_putchar(c);
}

void printstring(va_list args)
{
	char *s;
	s = va_arg(args, char *);
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
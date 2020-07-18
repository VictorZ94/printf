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

void printint(va_list args)
{
	char lastDigit;
	int reversed;
	int n;

	n = va_arg(args, int);

	if (n < 0)
	{
	_putchar('-');
	lastDigit = ('0' - (n % 10));
	n /= -10;
	}
	else
	{
	lastDigit = ((n % 10) + '0');
	n /= 10;
	}

	reversed = 0;
	while (n > 0)
	{
	reversed = reversed * 10 + (n % 10);
	n /= 10;
	}

	while (reversed > 0)
	{
	char c = ((reversed % 10) + '0');
	_putchar(c);
	reversed /= 10;
	}
	_putchar(lastDigit);
}

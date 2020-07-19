#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

int printchar(va_list args)
{
	char c;
	c = va_arg(args, int);
	_putchar(c);
	return(-1);
}

int printstring(va_list args)
{
	char *s;
	int i;
	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return(i - 2);
}

int printporcent(va_list args)
{
	(void)args;
	_putchar('%');
	return(-1);
}

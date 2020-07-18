#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int j;
	print form[] = {
		{'c', printchar},
		{'s', printstring},
		{'\0', '\0'}
	};
	
	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (form[j].c != '\0' && format[i] == '%')
		{
			if (format[i + 1] == form[j].c)
			{
				form[j].f(args);
				i =+ 2;
			}
			j++;
		}
		_putchar(format[i]);
	i++;
	}
	va_end(args);
	return (0);
}

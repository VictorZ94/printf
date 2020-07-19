#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _printf - write characters standard output and classified by formatt
 * @format: are all different formats type.
 *
 * Return: lenght all format printed - print formatted.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j;
	int count = 0;
	print form[] = {
		{"%", printporcent},
		{"c", printchar},
		{"s", printstring},
		{NULL, NULL}
	};

	if (!format)
		return (-1);

	if (format[i] == '%' && !format[i + 1])
		return (-1);

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (form[j].c != '\0' && format[i] == '%')
		{
			if (format[i + 1] == form[j].c[0])
			{
				count = form[j].f(args);
				i += 2;
			}
			j++;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i + count);
}

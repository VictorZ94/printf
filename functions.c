#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * printchar - function to print char data types
 * @args: - argument variadic function
 *
 * Return: -1
 */
int printchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar (c);
	return (-1);
}

/**
 * printstring - function to print string data types
 * @args: - argument variadic function
 *
 * Return: lenght string
 */
int printstring(va_list args)
{
	char *s;
	int i;
	char *null = "(null)";
	s = va_arg(args, char *);
	if (s == NULL)
	{
		i = 0;
		while(null[i] != '\0')
		{
			_putchar(null[i]);
			i++;
		}
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i - 2);
}

/**
 * printporcent - function to print percentage symbol data types
 * @args: - argument variadic function
 *
 * Return: -1
 */
int printporcent(va_list args)
{
	(void)args;
	_putchar('%');
	return (-1);
}

int printspace(va_list args)
{
	(void)args;
	_putchar('%');
	return (-2);
}
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
		while (null[i] != '\0')
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

/**
 * printspace - function to print percentage symbol data types
 * @args: - argument variadic function
 *
 * Return: character prints
 */
int printspace(va_list args)
{
	(void)args;
	_putchar('%');
	return (-2);
}

/**
 * printint - function to print Integers
 * @args: - argument variadic function
 *
 * Return: amount number prints
 */
int printint(va_list args)
{
	int aux, size = 1, a, b, pu_ch = 1;
	int n = va_arg(args, int);
	b = n % 10;
	n = n / 10;
	aux = n;
	if (b < 0)
	{
		b = -1 * b;
		aux = -1 * aux;
		n = -1 * n;
		_putchar('-');
		pu_ch++;
	}
	if (aux > 0)
	{
		while (aux / 10 != 0)
		{
			aux = aux / 10;
			size = size * 10;
		}
		while (size > 0)
		{
			a = n / size;
			_putchar('0' + a);
			n = n - a * size;
			size = size / 10;
			pu_ch++;
		}
	}
	_putchar('0' + b);
	return (pu_ch);
}


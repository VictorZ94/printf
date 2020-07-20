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

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
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
 * printint - function to print an integer data types
 * @args: - argument variadic function
 *
 * Return: -1
 */
int printint(va_list args)
{
	char lastDigit;
	int reversed;
	int n, contador;

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
	contador = 0;
	while (reversed > 0)
	{
	char c = ((reversed % 10) + '0');

	_putchar(c);
	reversed /= 10;
	contador++;
	}
	_putchar(lastDigit);
	return (contador);
}

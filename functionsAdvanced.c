#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * printbinary - converts a decimal to binary
 * @args: - argument variadic function
 *
 * Return: amount n prints
 */
int printbinary(va_list args)
{
	int i, count = 0;
	unsigned int n;
	int bin[1000]; /*tamaño arbitrario*/

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		i = 0;
		while (n > 0)
		{
			bin[i] = n % 2;
			n = n / 2;
			i++;
		}
		i = i - 1;
		while (i >= 0)
		{
			_putchar(bin[i] + '0');
			i--;
			count++;
		}
	}
	return (count);
}
/**
 * printrot13 - prints the rot13'ed string
 * @args: argument variadic function
 *
 *Return: amount n prints
 */
int printrot13(va_list args)
{
	int i;
	int count = 0;
	char *s = va_arg(args, char *);

	i = 0;
	while (s[i] != 0)
	{
		while ((s[i] >= 'A' && s[i] < 'N') || (s[i] >= 'a' && s[i] < 'n'))
		{
			s[i] += 13;
			_putchar(s[i]);
			i++;
			count++;
		}
		if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] -= 13;
			count++;
		}
			_putchar(s[i]);
		i++;
	}
	_putchar(s[i]);
	return (count);
}
/**
 * printrevString- reverses a string
 * @args: argument variadic function
 *
 * Return: amount n prints
 */
int printrevString(va_list args)
{
	int i = 0; /*contador cadena al derecho*/
	int count = 0;
	char *s = va_arg(args, char *);

	while (s[i] != 0)
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
		count++;
	}
	return (count);
}

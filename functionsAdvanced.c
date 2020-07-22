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
	return (count - 2);
}
/**
 * printrot13 - prints the R'ed s
 * @args: argument variadic function
 *
 *Return: amount n prints
 */
int printrot13(va_list args)
{
	char *s;
	char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *R = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, count = 0;

	s = va_arg(args, char *);

	i = 0;
	while (s[i])
	{
		count++;
		j = 0;
		while (A[j])
		{
			if (s[i] == A[j])
			{
				_putchar(R[j]);
				break;
			}
			if (A[j + 1] == '\0')
				_putchar(s[i]);
			j++;
		}
		i++;
	}
	return (count - 1);
}
/**
 * printrevString- reverses a s
 * @args: argument variadic function
 *
 * Return: amount n prints
 */
int printrevString(va_list args)
{
	int i = 0; /*contador cadena al derecho*/
	int count = 0;
	char *s;

	s = va_arg(args, char *);
	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
			count++;
		i--;
	}
	return (count - 1);
}

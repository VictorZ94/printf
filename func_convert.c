#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * printuint - function to print number without signed
 * @args: - argument variadic function
 *
 * Return: counter - 1
 */
int printuint(va_list args)
{
	char lastDigit, c;
	unsigned int reversed;
	unsigned int n, counter = 0;

	n = va_arg(args, int);

	lastDigit = ((n % 10) + '0');
	n /= 10;

	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		c = ((reversed % 10) + '0');
		_putchar(c);
		reversed /= 10;
		counter++;
	}
	_putchar(lastDigit);
	return (counter - 1);
}

/**
 * printhexaMAY - function to print number without signed in base hexadecimal
 * @args: - argument variadic function
 *
 * Return: counter - 1
 */
int printhexaMAY(va_list args)
{
	unsigned int n, i, temp;
	int j;
	char hexa[1000];

	n = va_arg(args, int);
	i = 0;
	temp = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = temp + 55;
			i++;
		}
		n = n / 16;
	}
	for (j = (i - 1); j >= 0; j--)
		_putchar(hexa[j]);

return (i - 2);
}

/**
 * printhexaMIN - function to print number unsigned  hexadecimal lowercase
 * @args: - argument variadic function
 *
 * Return: counter - 1
 */
int printhexaMIN(va_list args)
{
	unsigned int n, i, temp;
	int j;
	char hexa[1000];

	n = va_arg(args, int);
	i = 0;
	temp = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = temp + (55 + 32);
			i++;
		}
		n = n / 16;
	}
	for (j = (i - 1); j >= 0; j--)
		_putchar(hexa[j]);

return (i - 2);
}

/**
 * printoctal - function to print number without signed in base 8 numbers Octal
 * @args: - argument variadic function
 *
 * Return: counter - 1
 */
int printoctal(va_list args)
{
	unsigned int n, rem = 0;

	n = va_arg(args, int);

	print_octal(n, rem);
	return (0);
}

/**
 * print_octal - function to print number without signed numbers Octal
 * @n: number to octal
 * @rem: remaider
 * Return: counter - 1
 */
int print_octal(unsigned int n, unsigned int rem)
{
	if (n == 0)
		return (0);

	rem = n % 8;
	n = n / 8;
	print_octal(n, rem);
	_putchar(rem + '0');
	return (0);
}


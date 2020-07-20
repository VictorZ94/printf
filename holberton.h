#ifndef PRINTF_H
#define PRINTF_H
/*Holberton header*/
#include <stdarg.h>
/**
 * struct print - Structure of string of characters and functions of _printf.
 * @c: format for print
 * @f: Functions to the format
 */

typedef struct print
{
	char *c;
	int (*f)(va_list);
} print;

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list args);
int printstring(va_list args);
int printporcent(va_list args);
int printint(va_list args);

#endif

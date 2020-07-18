#ifndef PRINTF_H
#define PRINTF_H
/*Holberton header*/
#include <stdarg.h>

typedef struct print
{
	char c;
	void (*f)(va_list);
}print;

int _printf(const char *format, ...);
int _putchar(char c);
void printchar(va_list args);
void printstring(va_list args);

#endif 

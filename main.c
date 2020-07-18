#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
      int len;
      int lesn2;
      char *str = World;

      _printf("String literal: Hello World\n");
      printf("String literal: Hello World\n");
      _printf("Hello %s \n", str);
      printf("Hello %s \n", str);
      _printf("Hello %s Holberton \n", str);
      printf("Hello %s Holberton \n", str);
      len = _printf("Let's try to printf a simple sentence.\n");
      len2 = printf("Let's try to printf a simple sentence.\n");
      _printf("Character:[%c]\n", 'H');
      printf("Character:[%c]\n", 'H');
      _printf("String:[%s]\n", "I am a string !");
      printf("String:[%s]\n", "I am a string !");
      len = _printf("Percent:[%%]\n");
      len2 = printf("Percent:[%%]\n");
      _printf("Unknown:[%r]\n");
      printf("Unknown:[%r]\n");

return 0;
}
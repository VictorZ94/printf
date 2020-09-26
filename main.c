#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
/*int main()
{
      char *string = "World";
      int len;
      int len2;
      char *str2 = "I am another string";
      _printf("=====PRINTF STRING AND INTEGER==============\n");
      len2 = printf("1Hello %i %% % %%%s%s%s%%%\n", INT_MIN ,string, str2, "Done!");
      len = _printf("1Hello %i %% % %%%s%s%s%%%\n", INT_MIN ,string, str2, "Done!");
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("2Hello % %s %c %Holberton %d%D%%%%%%%%%i\n", string, 'h', INT_MAX, 1000000000000000);
      len = _printf("2Hello % %s %c %Holberton %d%D%%%%%%%%%i\n", string, 'h', INT_MAX, 1000000000000000);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("3Hello %% %s %c %d %d%Holberton %s \n", string, 'h', 70, 5569587374, "DONE!");
      len = _printf("3Hello %% %s %c %d %d%Holberton %s \n", string, 'h', 70, 5569587374, "DONE!");
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2= printf("4Hello %%%%%%%%%d% %%%%%%%%%%\n", INT_MAX);
      len = _printf("4Hello %%%%%%%%%d% %%%%%%%%%%\n", INT_MAX);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%d\n", INT_MAX);
      len = _printf("%d\n", INT_MAX);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%i\n", INT_MIN);
      len = _printf("%i\n", INT_MIN);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%i%i%d\n", 0);
      len = _printf("%i%i%d\n", 0);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%i\n");
      len = _printf("%i\n");
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%d%D%%%%%%%%%i\n", INT_MAX, 1000000000000000);
      len = _printf("%d%D%%%%%%%%%i\n", INT_MAX, 1000000000000000);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("[%d]\n", O_RDWR);
      len = _printf("[%d]\n", O_RDWR);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%i%%d%%\t%%%%i\n", 170, 0, 150866);
      len = _printf("%i%%d%%\t%%%%i\n", 170, 0, 150866);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%i%%d%%\t%%%%i\n", -170, 0, -150866);
      len = _printf("%i%%d%%\t%%%%i\n", -170, 0, -150866);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      _printf("===================\n");
      len2 = printf("%d%%i%%%%%%5d\n", -1020464830, 0, -150866);
      len = _printf("%d%%i%%%%%%5d\n", -1020464830, 0, -150866);
      printf("Expected: %d \n", len2);
      _printf("Actual: %d \n", len);
      return (0);
}
int main()
{
      int len;
      int len2;
      _printf("==========================\n");
      len2 = printf("Expected: [%%%%]\n");
      len = _printf("Actual  : [%%%%]\n");
      printf("Expected: %d \n", len2);
      printf("Actual: %d \n", len);
      len2 = printf("Expected   : %%%%%c\n", 'y');
	len = _printf("Actual     : %%%%%c\n", 'y');
      printf("Expected: %d \n", len2);
      printf("Actual: %d \n", len);
      len2 = printf("Expected   : %% %% %c\n", 'y');
	len = _printf("Actual     : %% %% %c\n", 'y');
      printf("Expected: %d \n", len2);
      printf("Actual: %d \n", len);
      len2 = printf("Expected   : %% % %c\n", 'y');
	len = _printf("Actual     : %% % %c\n", 'y');
      printf("Expected: %d \n", len2);
      printf("Actual: %d \n", len);
      len2 = printf("Expected   : %% %s% %c\n", "String" ,'y');
	len = _printf("Actual     : %% %s% %c\n", "String", 'y');
      printf("Expected: %d \n", len2);
      printf("Actual: %d \n", len);
      len2 = printf("Expected: %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
      len = _printf("Actual  : %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
      printf("Expected: %d \n", len2);
      printf("Actual  : %d \n", len);
return (0);
}*/
/*
int main()
{
      char *string = "World";
      int len;
      int len2;
      int alen, elen;
	char c = 'z';
	char *str = NULL;
      len = _printf("String literal: Hello World\n");
      len2  = printf("String literal: Hello World\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("Hello %s \n", string);
      len2 = printf("Hello %s \n", string);
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("Hello %s Holberton \n", string);
      len2 = printf("Hello %s Holberton \n", string);
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("Let's try to printf a simple sentence.\n");
      len2 = printf("Let's try to printf a simple sentence.\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("Character:[%c]\n", 'H');
      len2 = printf("Character:[%c]\n", 'H');
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("String:[%s]\n", "I am a string !");
      len2 = printf("String:[%s]\n", "I am a string !");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      _printf("==========================\n");
      len = _printf("Percent:[%%]\n");
      len2 = printf("Percent:[%%]\n");
      len = _printf("Percent:[%]\n");
      len2 = printf("Percent:[%]\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      printf("%");
      _printf("%");
      printf("%s", NULL);
      _printf("%s", NULL);
     _printf("==========================\n");
      len = _printf("Unknown:[%r]\n");
      len2 = printf("Unknown:[%r]\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
	printf("START NEW TEST\n");
	printf("=====================\n");
	printf("printf(NULL)  : %d\n", printf(str));
	printf("_printf(NULL) : %d\n", _printf(str));
	printf("printf(\"%\") : %d\n", printf("%"));
	printf("_printf(\"%\"): %d\n", _printf("%"));
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%%%c\n", 'y');
	_printf("Actual     : %%%%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
      printf("================\n");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
      printf("1================\n");
	elen = printf("%s", "");
	alen = _printf("%s", "");
      printf("2================\n");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
      printf("================\n");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
      printf("================\n");
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen);
	printf("Expected  %i %d\n", 0032, 0032);
      _printf("Actual %i %d \n", 0032, 0032);
return 0;
}
*/
/*int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}*/

/*int main(void)
{
    int len;
    int len2;
		char s[] = "Let's try to printf a simple sentence.";


    len = _printf("Len:%r\n",s);
    len2 = printf("Len2:%s\n",s);
		_printf("LengthMine:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
		
    len = _printf("Len: %R\n",s);
    len2 = printf("Len2: %s\n",s);
		_printf("LengthMine:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
	
		return 0;
}*/
/*int main(void)
{
  long int l, l2;

  l = (long int)INT_MAX + 1024;
  l2 =(long int)INT_MIN - 1024;

  printf("PROBEMOS CON d=\n");
  _printf("1.%d\n",1024);
  printf("2.%d\n",1024);
  _printf("1.%d\n",-1024);
  printf("2.%d\n",-1024);
  _printf("1.%d\n",0);
  printf("2.%d\n",0);
  _printf("1.%d\n",INT_MAX);
  printf("2.%d\n",INT_MAX);
   _printf("1.%d\n",INT_MIN);
  printf("2.%d\n",INT_MIN);
   _printf("1.%d\n",l);
  printf("2.%d\n",l);
  _printf("1.%d\n",l2);
  printf("2.%d\n",l2);
  _printf("1.There is a %d bytes in %d KB\n", 1024, l);
  printf("2.There is a %d bytes in %d KB\n", 1024, l);
  _printf("1.%d - %d = %d\n", 1024, 2048, -1024);
  printf("2.%d - %d = %d\n", 1024, 2048, -1024);
  _printf("1.%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  printf("2.%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  printf("PROBEMOS CON i=\n");
  _printf("1.%i\n",1024);
  printf("2.%i\n",1024);
  _printf("1.%i\n",-1024);
  printf("2.%i\n",-1024);
  _printf("1.%i\n",0);
  printf("2.%i\n",0);
  _printf("1.%i\n",INT_MAX);
  printf("2.%i\n",INT_MAX);
   _printf("1.%i\n",INT_MIN);
  printf("2.%i\n",INT_MIN);
   _printf("1.%i\n",l);
  printf("2.%i\n",l);
  _printf("1.%i\n",l2);
  printf("2.%i\n",l2);
  _printf("1.There is a %i bytes in %i KB\n", 1024, l);
  printf("2.There is a %i bytes in %i KB\n", 1024, l);
  _printf("1.%i - %i = %i\n", 1024, 2048, -1024);
  printf("2.%i - %i = %i\n", 1024, 2048, -1024);
  _printf("1.%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  printf("2.%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  printf("AHORA PROBEMOS CON i Y d=\n");
  _printf("1. %d == %i\n", 1024,1024);
  printf("2. %d == %i\n", 1024,1024);
  _printf("1.%iddi%diddiiddi == %i\n", 1024);
  printf("2.%iddi%diddiiddi == %i\n", 1024);
  _printf("1.%d\n", 10000);
  printf("2.%d\n", 10000);
 _printf("1.%i\n", 10000);
  printf("2.%i\n", 10000);


  return 0;
}*/
int main(void)
{
  printf("ROT13\n");
  _printf("%R\n","Guvf fragrapr vf ergevriq sebz in_netf!\n");
  _printf("Complete the sentence: You %R nothing, Jon snow.\n", "xabj");
  _printf("Complete the sentence: You %R nothing, Jon snow.\n", "");
   printf("REVERSE STRING\n");
   _printf("%r\n","This sentence is retrived from va_args!");
   _printf("Complete the sentence: You %r nothing, Jon snow.\n", "know");
   _printf("Complete the sentence: You %r nothing, Jon snow.\n", "");


  return 0;
}



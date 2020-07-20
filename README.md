# 0x11. C - printf


## _printf()

#### Prototype: int _printf(const char *format, ...);

#### _printf.c 
Prints out a formatted string to standard output, replicating the C standar library 
printf() function for characters, string and integers.

### Formats used

|  %Character |  Output |
| ------------ | ------------ |
|   c |  Prints a single character |
|  s  | Prints a string of characters  |
|  d  | Prints a signed decimal integer  |
|   i   |Prints a signed decimal integer   |


## Description 🚀

This project creates our own version, _printf, of the C library function printf. Printf formats data and converts it to a character string and outputs to stdout, applying variadic functions, structures and function pointers.

### Requirements 📋

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- All your header files should be include guarded


### Some examples!
```
We have two strings:

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	_printf("Length:[%d, %i]\n", len, len);

The expected output:
	Let's try to printf a simple sentence.
	Character:[H]
	String:[I am a string !]
	Percent:[%]
	Length:[39, 39]
```

## Authors ✒️

* **Victor Zuluaga** - *Holberton School Student* - [VictorZ94](https://github.com/VictorZ94)
* **Valentina Gómez** - *Holberton School Student* - [Valentinaga1](https://github.com/Valentinaga1)

## More files 📄

- #### _putchar.c 
Writes a character to stdout.

- #### functions.c 
file with all the functions to print a string, a character, an integer.

- #### holberton.h 
header file containing the prototypes of each function and defines a struct.

- #### man_3_printf 
man page containing details about the usage of _printf function.

- #### tests/main.c 
contains main to test the files

#### End
---

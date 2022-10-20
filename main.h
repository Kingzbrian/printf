#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

struct format
{
	char *id;
	int (*f)();
} 
typedef convert_match;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_37(void);
int _strlenc(const char *s);
#endif

#ifndef MAIN_H
#define MAIN_H

/* HEADER FILES */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct function_call - checks for format specifier
 * @specifier: format specifier character
 * @fxn: The function pointer pass as argument
 */

typedef struct function_call
{
	char specifier;
	int (*fxn)(va_list);
} f_call;


int _printf(const char *format, ...);
int put_char(va_list printf_arg);
int put_string(va_list printf_arg);
int put_mod(va_list printf_arg);
int put_digits(va_list printf_arg);
int (*f_caller(char check))(va_list);

#define UNUSED(x) (void)(x)
#define DIV_INIT (1)
#define DIV_CHECK (10)
#define DIV_MIN (0)



#endif

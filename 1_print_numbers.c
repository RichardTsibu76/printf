#include "main.h"
#include <stdio.h>

void _convert(int c)
{
	if (c < 0)
	{
		putchar('-');
		c = -c;
	}
	if (c == 0)
	{
		putchar('0');
		return;
	}
	if (c < 10)
	{
		putchar(c + '0');
		return;
	}
	if (c >= 10)
	{
	_convert(c/10);
	putchar((c%10) + '0');
	}
}

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	int print = 0;
	va_list print_integers;
	
	if (format == NULL)
	{
		return (-1);
	}

	va_start(print_integers, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		if (*format == 'd')
		{
			int print_number = va_arg(print_integers, int);
			_convert(print_number);
			print++;
		}
		else if (*format == 'i')
		{
			int calculate = va_arg(print_integers, int);
			_convert(calculate);
			print++;
		}
		else
		{
		putchar(*format);
		print++;
		}
		
		format++;
	}
	va_end(print_integers);
	return (print);
}
			

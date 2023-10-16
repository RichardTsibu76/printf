#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	va_list print_integers;

	va_start(print_integers, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		else
		{
			_putchar(*format);
		}
		if (*format == 'd')
		{
			int print = va_arg(print_integers, int);
			_putchar(print);
		}
		else if (*format == 'i')
		{
			int calculate = va_arg(print_integers, int);
			_putchar(calculate);
		}
		format++;
	}
	return (*format);
	va_end(print_integers);
}


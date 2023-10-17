#include "main.h"

/**
 * _printf - function that converts argument into binary
 * @format: character string
 * Return: numbers
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	int i = 0;
	unsigned int remain;
	char array[sizeof(unsigned int) * 8];
	va_list convert;

	va_start(convert, format);
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
			putchar(*format);
			count++;
		}

	if (*format == 'b')
	}
}

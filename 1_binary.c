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
		{
			unsigned int print = va_arg(convert, unsigned int);
			while (print > 0)
			{
				remain = print % 2;
				array[i] = remain;i++;
				print = print / 2;
				count++;
			}
			for (i = (i - 1); i >= 0; i--)
			{
				putchar(array[i] + '0');
				count++;
			}
		}
		format++;
	}
	va_end(convert);
	return count;
}

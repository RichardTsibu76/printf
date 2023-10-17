#include "main.h"

/**
 * _printf - function that convertes into binary
 * @format: character string
 * Return: binary
 */

int _printf(cont char *format, ...)
{
	unsigned int print = va_arg(convert, unsigned int);

	while (print > 0)
	{
		remain = print % 2;
		array[i] = remain;
		i++;
		print = print / 2;
		count++;
	}
	for (i = (i - 1); i >= 0; i--)
	{
		putchar(array[i] + '0');
		count++;
	}

	format++;
	va_end(convert);
	return (count);
}

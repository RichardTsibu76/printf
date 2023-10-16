#include "main.h"

/**
 * _printf - Prints different formats
 * @format: printed format
 * Return: length
 */

int _printf(const char *format, ...)
{
	int index, length = 0;
	char eval;
	va_list printf_arg;

	if (format == NULL)
		return (-1);

	va_start(printf_arg, format);
	for (index= 0; format[index] && (format[index] != '\0'); index++)
	{
		if (format[index] == '%')
		{
			index++;
			eval = format[index];
			if (eval == 'c' || eval == 's' || eval == '%'
					|| eval == 'd' || eval == 'i')
				length += f_caller(eval)(printf_arg);
		}
		else
		{
			write(1, &format[index], 1);
			length++;
		}
	}
	va_end(printf_arg);
	return (length);
}

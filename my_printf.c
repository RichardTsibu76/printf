#include "main.h"
/**
 *_printf -handles different format like %s, %c ,%
 *@format: array of characters to be printed
 *Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int index, my_length = 0;
	char eval;
	va_list printf_arg;

	if (format == NULL)
		return (-1);

	va_start(printf_arg, format);
	for (index = 0; format[index] && (format[index] != '\0'); index++)
	{
		if (format[index] == '%')
		{
			index++;
			eval = format[index];
			if (eval == 'c' || eval == 's' || eval == '%'
					|| eval== 'd' || eval == 'i')
				my_length += f_caller(eval)(printf_arg);
		}
		else
		{
			write(1, &format[index], 1);
			my_length++;
		}
	}
	va_end(printf_arg);
	return (my_length);
}

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
	/* the va_start macro taking the element of the va_list */
	for (index = 0; format[index] && (format[index] != '\0'); index++)
	{
		if (format[index] == '%')
		{
			index++;
			eval = format[index];
			if (eval == '\0')
				return (-1);
			if (eval == 'c' || eval == 's' || eval == '%'
					|| eval == 'd' || eval == 'i')
				my_length += f_caller(eval)(printf_arg);
		}
		else
		{
/* the write function or system call writing (fd 1) 1byte */
			write(1, &format[index], 1);
			my_length++;
		}
	}
	va_end(printf_arg);
	/* the va_end macro ending the operation */
	return (my_length);
}

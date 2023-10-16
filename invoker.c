#include "main.h"

/**
 *f_caller - function pointer pass as parameter
 *@check - points to format specifier
 *Return - it returns NULL on sucess
 */
int (*f_caller(char check))(va_list)
{
	f_call call[] = {
	/* array of that displays the formats specifiers */
		{'c', put_char},
	/* the first one the string format specifier */
		{'s', put_string},
		{'%', put_mod},
	/* the format specifier for modulo */
		{'d', put_digits},
	/* the format specifier for that of the module */
		{'i', put_digits},
	/* the format specifier for that of intteger */
		{'\0', NULL}
	};
	int i = 0;

	while (call[i].specifier != '\0')
	{
		if (check == call[i].specifier)
		/* using the struct for accesing */
			return (call[i].fxn);
	i++;
	}
	return (NULL);
}

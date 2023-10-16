#include "main.h"

int put_char(va_list printf_arg);
int put_string(va_list printf_arg);
int put_mod(va_list printf_arg);
int put_digits(va_list printf_arg);

/**
 * put_char - The function that prints characters
 * @printf_arg: The va_list
 * Return: Each character
 */

int put_char(va_list printf_arg)
{
	char c;

	c = va_arg(printf_arg, int);
	write(1, &c, 1);
	return (1);
}


/**
 * put_str - prints string
 * @printf_arg: va_list
 * Return: string length
 */

int put_string(va_list printf_arg)
{
	char *string;
	int index = 0, len = 0;

	string = va_arg(printf_arg, char *);
	if (string == NULL)
		string = "(null)";
	while (string[index])
	{
		write(1, &string[index], 1);
		len++;
		index++;
	}
	return (len);
}

/**
 * put_mod - prints percentage '%'
 * @printf_arg: data va_list
 * Return: 1
 */

int put_mod(va_list printf_arg)
{
	char m;

	UNUSED(printf_arg);
	m = '%';
	write(1, &m, 1);
	return (1);
}

/**
 * put_digits - prints digits
 * @printf_arg: va_list for the storage
 * Return: This returns length
 */

int put_digits(va_list printf_arg)
{
	int div = DIV_INIT, num, len = 0;
	char p_n;
	unsigned int n;

	num = va_arg(printf_arg, int);
	if (num < 0)
	{
		p_n = '-';
		write(1, &p_n, 1);
		len++;
		n = -num;
	}
	else
		n = num;
	while ((n / div) >= DIV_CHECK)
		div *= DIV_CHECK;
	while (div > DIV_MIN)
	{
		p_n = (n / div) + '0';
		write(1, &p_n, 1);
		len++;
		n %= div;
		div /= DIV_CHECK;
	}
	return (len);
}

#include "main.h"

/**
 * handle_misc_specifiers - handles miscellaneous format specifiers
 * @format: the format string
 * @i: pointer to the current position
 *
 * Return: number of characters printed for the specifier
 */
int handle_misc_specifiers(const char *format, int *i)
{
	int count = 0;

	if (format[*i] == '%')
		count += _putchar('%');
	else
	{
		count += _putchar('%');
		count += _putchar(format[*i]);
	}
	return (count);
}

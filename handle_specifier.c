#include "main.h"

/**
 * handle_specifier - handles the format specifiers
 * @format: the format string
 * @args: the va_list of arguments
 * @i: pointer to the current position in the format string
 *
 * Return: the number of characters printed for the specifier
 */
int handle_specifier(const char *format, va_list args, int *i)
{
	int count = 0;

	(*i)++;

	switch (format[*i])
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += print_integer(va_arg(args, int));
			break;
		case 'b':
			count += print_bin(va_arg(args, int));
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(format[*i]);
			break;
	}

	return (count);
}

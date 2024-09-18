#include "main.h"

/**
 * handle_char_specifiers - handles char format specifiers
 * @format: the format string
 * @args: the va_list of arguments
 * @i: pointer to the current position in the format string
 *
 * Return: the number of characters printed for the specifier
 */
int handle_char_specifiers(const char *format, va_list args, int *i)
{
	int count = 0;

	switch (format[*i])
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case 'S':
			count += print_custom_string(va_arg(args, char *));
			break;
	}
	return (count);
}

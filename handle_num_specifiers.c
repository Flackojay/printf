#include "main.h"

/**
 * handle_number_specifiers - handles the number format specifiers
 * @format: the format string
 * @args: the va_list of arguments
 * @i: pointer to the current position in the format string
 *
 * Return: the number of characters printed for the specifier
 */
int handle_number_specifiers(const char *format, va_list args, int *i)
{
	int count = 0;

	switch (format[*i])
	{
		case 'd':
		case 'i':
			count += print_integer(va_arg(args, int));
			break;
		case 'b':
			count += print_bin(va_arg(args, int));
			break;
		case 'u':
			count += print_uns(va_arg(args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			count += print_hex_lower(va_arg(args, unsigned int));
			break;
		case 'X':
			count += print_hex_upper(va_arg(args, unsigned int));
			break;
	}
	return (count);
}

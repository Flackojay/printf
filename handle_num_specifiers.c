#include "main.h"

/**
 * handle_number_specifiers - handles the number format specifiers
 * @format: the format string
 * @args: the va_list of arguments
 * @i: pointer to the current position in the format string
 * @plus_flag: handles plus flag
 * @space_flag: handles space flag
 * @hash_flag: handles hash flag
 *
 * Return: the number of characters printed for the specifier
 */
int handle_number_specifiers(const char *format
		, va_list args, int *i, int plus_flag, int space_flag, int hash_flag)
{
	int count = 0;

	switch (format[*i])
	{
		case 'd':
		case 'i':
			count += print_integer(va_arg(args, int), plus_flag, space_flag);
			break;
		case 'b':
			count += print_bin(va_arg(args, int));
			break;
		case 'u':
			count += print_uns(va_arg(args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(args, unsigned int), hash_flag);
			break;
		case 'x':
			count += print_hex_lower(va_arg(args, unsigned int), hash_flag);
			break;
		case 'X':
			count += print_hex_upper(va_arg(args, unsigned int), hash_flag);
			break;
	}
	return (count);
}

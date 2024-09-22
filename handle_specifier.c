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
	int plus_flag, space_flag, hash_flag;

	(*i)++;

	parse_flags(format, i, &plus_flag, &space_flag, &hash_flag);


	if (format[*i] == 'c' || format[*i] == 's' || format[*i] == 'S')
		count += handle_char_specifiers(format, args, i);
	else if (format[*i] == 'd' || format[*i] == 'i' || format[*i] == 'u'
			|| format[*i] == 'o' || format[*i] == 'x' || format[*i] == 'X')
		count += handle_number_specifiers(
				format, args, i, plus_flag, space_flag, hash_flag);
	else if (format[*i] == 'p')
		count += print_pointer(va_arg(args, void *));
	else
		count += handle_misc_specifiers(format, i);
	return (count);
}

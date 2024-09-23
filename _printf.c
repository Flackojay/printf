#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string with zero or more directives.
 *
 * Description: This function writes output to stdout according to the
 * format string provided, similar to the standard printf function.
 * Return: the number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;
			}
			else
				count += handle_specifier(format, args, &i);
		}
		else
		       count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

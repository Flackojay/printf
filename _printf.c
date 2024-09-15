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

	if (format == NULL)
		return (0);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
			}
		}
		else
		       count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

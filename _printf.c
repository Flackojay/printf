#include "main.h"

/**
 * _printf: produces output according to a format.
 * @format: character string with zero or more directives.
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	if (format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);

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
				default:
					count += _putchar('%);
					count += _putchar(format[i]);
			}
		}
		else
		       count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

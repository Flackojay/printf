#include "main.h"

/**
 * is_printable - checks if a character is printable
 * @c: character to check
 *
 * Return: 1 if printable, 0 otherwise
 */
int is_printable(char c)
{
	return (c >= 32 && c < 127);
}

/**
 * print_custom_string - prints a string and replaces
 * non-printable characters
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_custom_string(char *str)
{
	int count = 0, i = 0;
	char hex_map[] = "0123456789ABCDEF";

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i])
	{
		if (is_printable(str[i]))
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar(hex_map[(str[i] >> 4) & 0xF]);
			_putchar(hex_map[str[i] & 0xF]);
			count += 4;
		}
		i++;
	}
	return (count);
}

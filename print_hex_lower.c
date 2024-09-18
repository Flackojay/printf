#include "main.h"
/**
 * print_hex_lower - prints an unsigned integer in
 * hexadecimal (lowercase)
 * @n: unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_hex_lower(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n / 16)
		count += print_hex_lower(n / 16);
	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}

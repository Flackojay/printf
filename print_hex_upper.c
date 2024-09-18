#include "main.h"

/**
 * print_hex_upper - prints an unsigned integer
 * in hexadecimal (uppercase)
 * @n: unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_hex_upper(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (n / 16)
		count += print_hex_upper(n / 16);
	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}

#include "main.h"
/**
 * print_hex_lower - prints an unsigned integer in
 * hexadecimal (lowercase)
 * @n: unsigned integer to print
 * @hash_flag: handles hash flag
 *
 * Return: number of characters printed
 */
int print_hex_lower(unsigned int n, int hash_flag)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (hash_flag && n != 0)
	{
		count += _putchar('0');
		count += _putchar('x');
	}

	if (n / 16)
		count += print_hex_lower(n / 16, 0);
	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}

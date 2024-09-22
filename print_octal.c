#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal
 * @n: unsigned integer to print
 * @hash_flag: handles hash flash
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int n, int hash_flag)
{
	int count = 0;

	if (hash_flag && n != 0)
	{
		count += _putchar('0');
	}

	if (n / 8)
		count += print_octal(n / 8, 0);
	_putchar((n % 8) + '0');
	count++;

	return (count);
}

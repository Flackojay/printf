#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @n: unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_uns(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_uns(n / 10);
	_putchar((n % 10) + '0');
	count++;

	return (count);
}

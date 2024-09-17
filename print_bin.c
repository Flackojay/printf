#include "main.h"

/**
 * print_bin - prints binary of an integer
 * @n: integer to convert to binary
 *
 * Return: count.
 */
int print_bin(int n)
{
	int count = 0;
	unsigned int num;

	num = n;
	if (num / 2)
	{
		count += print_bin(num / 2);
	}
	_putchar((num % 2) + '0');
	count++;

	return (count);
}

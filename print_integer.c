#include "main.h"

/**
 * print_integer - prints integer and decimal specifiers
 * @n: number to be printed
 *
 * Return: count.
 */
int print_integer(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_integer(num / 10);
	_putchar((num % 10) + '0');
	count++;

	return (count);
}

#include "main.h"

/**
 * print_integer - prints integer and decimal specifiers
 * @n: number to be printed
 * @plus_flag: checks for + flag
 * @space_flag: checks for space flag
 *
 * Return: count.
 */
int print_integer(int n, int plus_flag, int space_flag)
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
	{
		if (plus_flag)
			count += _putchar('+');
		else if (space_flag)
			count += _putchar(' ');

		num = n;
	}

	if (num / 10)
		count += print_integer(num / 10, 0, 0);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}

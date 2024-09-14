#include "main.h"

/**
 * print_string - function to handle string format
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

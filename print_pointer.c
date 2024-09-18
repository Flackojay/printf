#include "main.h"

/**
 * print_pointer - prints a memory address (pointer) in hexadecimal format
 * @ptr: the pointer to print
 *
 * Return: number of characters printed
 */
int print_pointer(void *ptr)
{
	unsigned long int address;
	char hex_map[] = "0123456789abcdef";
	char buffer[20];
	int i = 0, count = 0;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));

	address = (unsigned long int)ptr;

	count += write(1, "0x", 2);

	while (address > 0)
	{
		buffer[i++] = hex_map[address % 16];
		address /= 16;
	}

	while (i > 0)
		count += _putchar(buffer[--i]);

	return (count);
}

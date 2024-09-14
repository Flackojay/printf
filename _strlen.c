#include "main.h"

/**
 * _strlen: custom implementation of strlen
 * @str: str to check
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

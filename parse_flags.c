#include "main.h"

/**
 * parse_flags - checks for flags and parse before conversion specifier
 * @format: format string
 * @i: pointer to the current position in the format string
 * @plus_flag: check for plus sign
 * @space_flag: check for space
 * @hash_flag: check for hash sign
 *
 * Return: nothing
 */
void parse_flags(const char *format, int *i, int *plus_flag
		, int *space_flag, int *hash_flag)
{
	*plus_flag = 0;
	*space_flag = 0;
	*hash_flag = 0;

	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			*plus_flag = 1;
		else if (format[*i] == ' ')
			*space_flag = 1;
		else if (format[*i] == '#')
			*hash_flag = 1;
		(*i)++;
	}
}

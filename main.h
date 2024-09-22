#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *str);
int print_integer(int n, int plus_flag, int space_flag);
int print_string(char *str);
int handle_specifier(const char *format, va_list args, int *i);
int print_bin(int n);
int print_uns(unsigned int n);
int print_octal(unsigned int n, int hash_flag);
int print_hex_lower(unsigned int n, int hash_flag);
int print_hex_upper(unsigned int n, int hash_flag);
int is_printable(char c);
int print_custom_string(char *str);
int handle_misc_specifiers(const char *format, int *i);
int handle_number_specifiers(const char *format, va_list args, int *i
		, int plus_flag, int space_flag, int hash_flag);
int handle_char_specifiers(const char *format, va_list args, int *i);
int print_pointer(void *ptr);
void parse_flags(const char *format, int *i, int *plus_flag
		, int *space_flag, int *hash_flag);

#endif

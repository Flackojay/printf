#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *str);
int print_integer(int n);
int print_string(char *str);
int handle_specifier(const char *format, va_list args, int *i);
int print_bin(int n);
int print_uns(unsigned int n);
int print_octal(unsigned int n);
int print_hex_lower(unsigned int n);
int print_hex_upper(unsigned int n);

#endif

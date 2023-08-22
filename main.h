#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int printf_string(va_list val);
int print_string(va_list args);
int printf_unsigned(va_list args);
void print_int(int num);
#endif

#include "main.h"
/**
 *_printf - prints any thing passed to it
 * @format: printed arguments format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int length;
	int str_len;
	va_list args;

	length = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					print_char(va_arg(args, int));
					i++;
					break;
				case 's':
					str_len = print_string(va_arg(args, char *));
					i++;
					length += (str_len - 1);
					break;
				case '%':
					_putchar('%');
			}
		}
		length++;
	}
	va_end(args);
	return (length);
}

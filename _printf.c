#include "main.h"
/**
 *_printf - prints any thing passed to it
 * @format: printed arguments format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, length = 0, str_len;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			print_char(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_len = print_string(args);
			i++;
			length += (str_len - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 'i' || format[i + 1] == 'd')
		{
			print_int(va_arg(args, int));
			i++;
		}
		length += 1;
	}
	va_end(args);
	return (length);
}

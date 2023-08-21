#include "main.h"
/**
 * _strlen - calculate string length
 * @str: string passed to function
 * Return: string length
 */
int _strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * print_string - print string
 * @args: string to be printed
 * Return: string length
 */
int print_string(va_list args)
{
	int i;
	char *str;
	int str_len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		str_len = _strlen(str);
		for (i = 0; i < str_len; i++)
		{
			_putchar(str[i]);
		}
		return (str_len);
	}
	else
	{
		str_len = _strlen(str);
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (str_len);
	}
}

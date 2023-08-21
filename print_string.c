#include "main.h"
/**
 * print_string - print string
 * @c: string to be printed
 * Return: string length
 */
int print_string(char *c)
{
	int i;

	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
	}
	return (i);
}

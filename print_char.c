#include "main.h"
/**
 * print_char - print characters
 * @c: character to be printed
 * Return: on success 1
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

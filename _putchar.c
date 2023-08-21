#include "main.h"

/**
 * _putchar - prints charachtere
 * @c : character to be printed
 * Return: on success 1
 * -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

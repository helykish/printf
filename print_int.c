#include "main.h"
/**
 * print_int - print integer
 * @num : number to be printed
 */
void print_int(int num)
{
	int n;

	if (num ==0)
		return;
	n = num / 10;
	print_int(n);
	_putchar(num % 10 + '0');

	return;
}

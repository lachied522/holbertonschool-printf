#include <stdio.h>
#include "main.h"
/**
 * print_number - Recursively prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of characters to be printed.
 */
int print_number(int n)
{
	int num = 0;

	if (n < 0)
	{
		num += _putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		num += print_number(n / 10);
	}
	num += _putchar((n % 10) + '0');
	return (num);
}

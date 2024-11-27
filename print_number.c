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
	unsigned int num;
    int count = 0;
    if (n < 0)
    {
        count += _putchar('-');
        if (n == -2147483648)
        {
            count += _putchar('2');
            num = 147483648;
        }
        else
        {
            num = -n;
        }
    }
    else
    {
        num = n;
    }
    if (num / 10)
        count += print_number(num / 10);
    count += _putchar((num % 10) + '0');
    return (count);
}

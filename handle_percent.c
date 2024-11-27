#include "main.h"
#include <stdarg.h>

/**
 * handle_percent - prints percent to stdout without using up va_list
 * @args: va_list
 * Return: 1
 */
int handle_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

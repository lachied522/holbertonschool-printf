#include "main.h"
#include <stdarg.h>

/**
 * handle_unknown - if character following '%' is unknown,
 * 		we want to print '%' it without using up any of the va_list
 * @args: va_list
 * Return: 0
 */
int handle_unknown(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}


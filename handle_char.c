#include "main.h"
#include <stdarg.h>

/**
 * handle_char - prints char from va_list
 * @args: va_list
 * Return: 1
 */
int handle_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}

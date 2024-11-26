#include "main.h"
#include <stdarg.h>

/**
 * handle_char - prints char from va_list
 * @args: va_list
 */
int handle_char(va_list args)
{
	int c = va_arg(args, int);
	_putchar(c);
	return (0);
}

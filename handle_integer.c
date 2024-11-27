#include "main.h"

/**
 * handle_integer - Handles 'i' and 'd' specifiers.
 * @args: Variadic argument list
 *
 * Return: Number of characters printed
 */

int handle_integer(va_list args)
{
	int num = va_arg(args, int);

	return (print_number(num));
}

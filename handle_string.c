#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_string - prints string to stdout
 * @s: string to print
 * Return: number of chars printed
 */
int print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}



/**
 * handle_string- prints string from va_list
 * @args: va_list
 * Return: number of chars printed
 */
int handle_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		return (print_string("(null)"));

	return (print_string(s));
}

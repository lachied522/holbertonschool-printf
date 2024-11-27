#include "main.h"
#include <stdarg.h>

/**
 * get_handler - returns pointer to corresponding print function
 * @c: specifier
 * Return: function pointer
 */
int (*get_handler(char c))(va_list args)
{
	specifier_t specifier_map[] = {
		{'c', handle_char},
		{'i', handle_integer},
		{'d', handle_integer},
		{'s', handle_string},
		{'%', handle_percent}
	};

	int j = 0;

	while (j < 5)
	{
		if (specifier_map[j].spec == c)
			return (specifier_map[j].handler);
		j++;
	}

	return (handle_unknown);
}

/**
 * _printf - prints format string
 * @format: char array
 * Return: 0 or 1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*handler_ptr)(va_list ap);
	int i;
	int n;

	va_start(ap, format);

	i = 0;
	n = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			handler_ptr = get_handler(format[i + 1]);
			n += handler_ptr(ap);
			if (handler_ptr != handle_unknown)
				i++;
		}
		else
		{
			n += _putchar(format[i]);
		}
		i++;
	}

	return (n);
}

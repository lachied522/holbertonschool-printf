#include "main.h"
#include <stdarg.h>

/**
 * get_handler - returns pointer to corresponding print function
 * @c: specifier
 * Return: function pointer
 */
int (*get_handler(char c))(va_list args)
{
	// TO DO: uncomment these once they are defined
	specifier_t specifier_map[] = {
		{'c', handle_char},
		// {'i', handle_integer},
		// {'d', handle_decimal},
		// {'s', handle_string},
		{'%', handle_percent}
	};

	int j = 0;

	while (j < 1) // TO DO: ensure this matches length of above array
	{
		if (specifier_map[j].spec == c)
			return specifier_map[j].handler;
		j++;
	}

	return handle_unknown;
}	

/**
 * _printf - prints format string
 * Return: 0 or 1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*handler_ptr)(va_list ap);
	int i;

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			handler_ptr = get_handler(format[i + 1]);
			handler_ptr(ap);
			// increment i to skip the character after '%',
			// unless it is unknown
			if (handler_ptr != handle_unknown)
				i++;
		} else {
			_putchar(format[i]);
		}
		i++;
	}
}

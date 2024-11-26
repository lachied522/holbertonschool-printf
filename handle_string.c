#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handle_string- prints string from va_list
 * @args: va_list
 * Return: number of chars printed
 */
int handle_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	int n;

	if (s == NULL)
		return (0);

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		n++;
	}

	return (n);
}

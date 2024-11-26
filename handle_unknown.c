#include <stdarg.h>

/**
 * handle_unknown - if character following '%' is unknown,
 * 		we want to skip it without using up any of the va_list
 * @args: va_list
 * Return: 1
 */
int handle_unknown(__attribute__((unused)) va_list args)
{
        return 1;
}


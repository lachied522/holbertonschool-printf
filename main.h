#ifndef MAIN
#define MAIN

#include <stdarg.h>

/* Struct definition */
typedef struct specifier
{
  char spec;             	/* Format specifier character */
  int (*handler)(va_list args); /* Function pointer to handle the specifier */
} specifier_t;

/* Function prototypes */
int _printf(const char *format, ...); /* Lachie  */

int handle_char(va_list args); /* Lachie */

int handle_string(va_list args); /* Olivia */

int handle_percent(va_list args); /* Lachie */

int handle_integer(va_list args); /* Jack */

int handle_decimal(va_list args); /* Jack */

int _putchar(char c); /* Copy and paste from previous project */

int print_number(int n); /* John */

#endif

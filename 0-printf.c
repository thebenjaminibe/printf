#include "main.h"

/**
 * _printf - produces output according to a format
 * write output to stdout, the standard output stream
 * handle the following conversion specifiers: c, s, %
 * @format: format specifier
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	char *count;
	va_list args;

	va_start(args, format);


	for (count = 0; *count != '\0'; count++)
	{
		while (*count != '\0')
			_putchar(*count);
		count++;
	}

	count++;
	/** handling args for specifiers */
	switch (*count)
	{
		case 'c' = i = va_arg(args, int);
				_putchar(i);
				break;
		case 's' = s = va_arg(args, char *)
				_putchar(s);
				break;
	}
	va_end(args);
}

#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	const char *a;
	va_list args;
	int i = 0, j = 0;
	char *s;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					j = va_arg(args, int);
					_putchar(j);
					break;
				case 's':
					s = va_arg(args, char *);
					puts(s, stdout);
					break;
				case '%':
					_putchar('%');
					break;
			}
			else
			{
				j = _putchar(*format);
			}
		}
	}
	return (0);
	va_end(args);
}

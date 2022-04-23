#include "main.h"
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	spec_t p[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"i", spec_i},
		{"d", spec_d},
		{"u", spec_u},
		{"b", spec_b},
		{"o", spec_o},
		{"x", spec_x},
		{"X", spec_X},
		{"p", spec_p},
		{"S", spec_S},
		{"r", spec_r},
		{"R", spec_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].func);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list args;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = check_for_specifiers(&format[i + 1]);
		if (func != NULL)
		{
			count += func(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}

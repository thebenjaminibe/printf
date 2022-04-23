#include "main.h"
<<<<<<< HEAD
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

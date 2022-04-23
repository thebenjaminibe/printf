#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct specifier
{
	char *t;
	int (*func)(va_list);
} spec_t;

int _putchar(char c);
int _printf(const char *format, ...);
int spec_c(va_list c);
int spec_s(va_list s);
int spec_i(va_list i);
int spec_d(va_list d);
int spec_u(va_list u);
int spec_b(va_list b);
int spec_o(va_list o);
int spec_x(va_list x);
int spec_X(va_list X);
int spec_p(va_list p);
int spec_S(va_list S);
int spec_r(va_list r);
int spec_R(va_list R);

#endif  /* _MAIN_H */

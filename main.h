#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @arg: The argument
 * @f: The function associated
 */
<<<<<<< HEAD
typedef struct op
{
	char *arg;
	void (*f)(va_list arg, int *count);
} print_t;
=======
typedef struct specifier
{
	char *t;
	int (*func)(va_list);
} spec_t;
>>>>>>> cc6e69a2fa0c7f4155d0e6a3ecff934cd8320d85

void (*get_func(const char *s, int index))(va_list, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
<<<<<<< HEAD
char *convert(unsigned int, int);
void print_string(va_list arg, int *count);
void print_c(va_list arg, int *count);
void print_prg(int *count);
#endif /* MAIN_H */
=======
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
>>>>>>> cc6e69a2fa0c7f4155d0e6a3ecff934cd8320d85

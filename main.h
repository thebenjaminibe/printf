#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @arg: The argument
 * @f: The function associated
 */
typedef struct op
{
	char *arg;
	void (*f)(va_list arg, int *count);
} print_t;

void (*get_func(const char *s, int index))(va_list, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
char *convert(unsigned int, int);
void print_string(va_list arg, int *count);
void print_c(va_list arg, int *count);
void print_prg(int *count);
#endif /* MAIN_H */

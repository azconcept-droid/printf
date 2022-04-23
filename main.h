#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_c(va_list ap, char *buf, unsigned int i_buf);
int print_s(va_list ap, char *buf, unsigned int i_buf);
int print_buf(char *buf, unsigned int nbyte);
int control_buf(va_list ap, char *buf, unsigned int i_buf);
int (*get_sp_func(const char *s, int index))(va_list, char *, unsigned int);
int count_sp(const char *arg_i, int index);
/**
 * struct specifier- struct for specifier function
 * @format_sp: format specifier
 * @f: pointer to specifier function
 */
typedef struct specifier
{
	char *format_sp;
	int (*f)(va_list, char*, unsigned int);
} specifier_f;

#endif

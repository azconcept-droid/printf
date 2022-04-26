#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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

int _printf(const char *format, ...);
int print_c(va_list ap, char *buf, unsigned int buf_i);
int print_s(va_list ap, char *buf, unsigned int buf_i);
int print_i(va_list ap, char *buf, unsigned int buf_i);
int print_per(va_list a __attribute__((unused)), char *buf, unsigned int i);
int print_bnr(va_list ap, char *buf, unsigned int buf_i);
int print_buf(char *buf, unsigned int nbyte);
unsigned int control_buf(char *buf, char c, unsigned int buf_i);
int (*get_sp_func(const char *s, int index))(va_list, char *, unsigned int);
int count_sp(const char *arg_i, int index);
char *fill_binary(char *binary, long int int_in, int isneg, int limit);
#endif

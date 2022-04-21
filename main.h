#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Struct display - Struct for display function
 * @format_sp: format specifier
 * @f: pointer to display functions
 */

typedef Struct display
{	
	char *format-sp;
	Int (*f)(va_list, char*, unsigned int);
}display_s;

int _printf(const char *format,...);
int print_c(va_list ap, char *text, unsigned int ntext);
int print_s(va_list ap, char *text, unsigned int ntext);
int (*get_function())(va_list ap, char *text, unsigned int ntext);
#endif

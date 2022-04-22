#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list ap, char *text, unsigned int ntext);
int print_str(va_list ap, char *text, unsigned int ntext);
int print_text(char *text, unsigned int ntext);


/**
 * struct display- struct for display function
 * @format_sp: format specifier
 * @f: pointer to display func
 */

typedef struct display
{
	char *format_sp;
	int (*f)(va_list, char*, unsigned int);
} display_s;
#endif

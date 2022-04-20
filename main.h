#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

   /* Struct display - Struct for display function
    * @format_ sp: format specifier
    * @f : pointer to display functions
    *
   */

  typedef Struct display
     {
          char *format-sp;
       
        Int (*f)(va_list, char*, unsigned int);
     } display_s;

  int _printf(const char *format,...);
  int display chr(va_list ap, char *text, unsigned int ntext);
  int display str(va_list ap, char *text, unsigned int ntext);
  int print_text(char *text, unsigned int ntext);

#endif

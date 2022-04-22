#include "main.h"
/**
 * _printf - print to standard output
 * @format: character string passed
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *buffer;	/*To receive the format string*/
	int i, j, count_byte = 0;
	va_list ap;
	
	i = 0, j = 0;
	
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				count_byte = prt_out(format);
				break;
			}
			else if (format[i + 1] == 'c')
			{
				index = i + 1;
				count_byte += put_c(va_arg(ap, int), format, index);
				i += 2;
			}
			
		}
		else
		{
			count_byte = prt_out(format);
			i++;
		}
	}
	va_end(ap);
	return (count_byte);
}

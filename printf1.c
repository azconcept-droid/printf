#include "main.h"
/**
 * _printf - print to standard output
 * @format: character string to be printed
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *string;		/*To receive the format string*/
	int i, j, len_string;

	/*To calculate the length of string*/
	len_string = 0;
	while (format[len_string])
		len_string++;
	/*To reserve a memory space for string*/
	string = malloc(sizeof(char) * (len_string + 1));
	/*Check if malloc() reserved a memory space*/
	if (string == NULL)
		return (NULL);
	va_list ap;

	i = 0, j = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					string[j] = va_arg(ap, int);
					i++;
					j++;
					break;
			}
		}
		string[j] = format[i];
		j++;
		i++;
	}

	write(1, string, j);
	va_end(ap);
	free(string);
	return (j);

}

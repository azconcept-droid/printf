#include "main.h"
/**
 * print_s - writes the string to stdout
 * @ap: argument pointer
 * @buf: buffer pointer
 * @i_buf: index for buffer pointer
 * Return: length of string..
 */
int print_s(va_list ap, char *buf, unsigned int i_buf)
{
	char *s;
	unsigned int i;
	char nill[] = "(null)";

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			i_buf = control_buf(buf, nill[i], i_buf);
		return (6);
	}
	for (i = 0; s[i]; i++)
		i_buf = control_buf(buf, s[i], i_buf);
	return (i);
}

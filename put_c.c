#include "main.h"
/**
 * print_chr - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 *
 * Return: 1.
 */
int print_c(va_list ap, char *buf, unsigned int i_buf)
{
	char c;

	c = va_arg(ap, int);
	control_buf(buf, c, i_buf);

	return (1);
}

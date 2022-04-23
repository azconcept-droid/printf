#include "main.h"
/**
 * print_c- writes the character c to stdout
 * @ap: argument pointer to char
 * @buf: buffer pointer
 * @i_buf: index for buffer pointer
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

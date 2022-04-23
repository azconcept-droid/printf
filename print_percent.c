#include "main.h"

/**
 * print_per - writes the character c to stdout
 * @ap: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: 1 if successful.
 */
int print_per(va_list ap __attribute__((unused)), char *buf, unsigned int i)
{
	control_buf(buf, '%', i);

	return (1);
}

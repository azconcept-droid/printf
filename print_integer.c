#include "main.h"

/**
 * print_i - prints an integer
 * @ap: input string
 * @buf: buffer pointer
 * @buf_i: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list ap, char *buf, unsigned int buf_i)
{
	int int_input;
	unsigned int int_in, int_temp, i, div, isneg;

	int_input = va_arg(ap, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buf_i = control_buf(buf, '-', buf_i);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		buf_i = control_buf(buf, ((int_in / div) % 10) + '0', buf_i);
	}
	return (i + isneg);
}

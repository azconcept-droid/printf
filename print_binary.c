#include "main.h"
/**
 * print_bnr - prints decimal in binary
 * @ap: input string
 * @buf: buffer pointer
 * @buf_i: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_bnr(va_list ap, char *buf, unsigned int buf_i)
{
	char *binary;
	int count, i, first_one, is_negative, int_input;

	int_input = va_arg(ap, int);
	is_negative = 0;
	if (int_input == 0)
	{
		buf_i = control_buf(buf, '0', buf_i);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		is_negative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary(binary, int_input, is_negative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			buf_i = control_buf(buf, binary[i], buf_i);
			count++;
		}
	}
	free(binary);
	return (count);
}

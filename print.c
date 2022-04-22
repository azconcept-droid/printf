#include "main.h"
/**
 * prt_out - print to standard output
 * @f_format: final string after substitution of specifier value
 *
 * Return: number of bytes printed 
 */
int prt_out(const char *f_format)
{
	char *get_f;
	int i = 0, len = 0, count_byte = 0;

	while(f_format[len])
		len++;

	get_f = malloc(sizeof(char) * (len + 1));

	if (!get_f || !f_format)
		return (0);

	while (f_format[i])
	{
		get_f[i] = f_format[i];
		i++;
		count_byte++;
	}
	get_f[i] = '\0';

	write(1, get_f, count_byte);
	free(get_f);
	return (count_byte);
}

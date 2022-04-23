#include "main.h"

/**
 * control_buf - join the characters together
 * @buf: buffer pointer
 * @c: characters to join
 * @i_buf: index of buffer pointer
 *
 * Return: index of buffer pointer.
 */
unsigned int control_buf(char *buf, char c, unsigned int i_buf)
{
	if (i_buf == 1024)	/*If maximum memory space is reached*/
	{
		print_buf(buf, i_buf);	/*Print to stdout*/
		i_buf = 0;	/*Reset memory space*/
	}
	buf[i_buf] = c;
	i_buf++;
	return (i_buf);
}

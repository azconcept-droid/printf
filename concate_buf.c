#include "main.h"

/**
 * control_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: character to concatenate
 * @i_buf: index of buffer pointer
 *
 * Return: index of buffer pointer.
 */
unsigned int control_buf(char *buf, char c, unsigned int i_buf)
{
	if (i_buf == 1024)	/*If maximum memory space is reached*/
	{
		print_buf(buf, ibuf);	/*Print to stdout*/
		i_buf = 0;	/*Reset memory space*/
	}
	buf[i_buf] = c;
	i_buf++;
	return (i_buf);
}

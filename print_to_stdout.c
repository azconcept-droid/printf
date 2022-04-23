#include "main.h"

/**
 * print_buf - prints characters to stdout
 * @buf: buffer pointer
 * @nbyte: number of bytes to print
 * Return: number of bytes printed.
 */
int print_buf(char *buf, unsigned int nbyte)
{
	return (write(1, buf, nbyte));
}

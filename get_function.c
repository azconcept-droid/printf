#include "main.h"
/**
 * get_sp_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_sp_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_c}, {"s", print_s}
	};
	
	int i = 0, j = 0, get_index;

	get_index = index;
	while (pr[i].type_sp)
	{
		if (s[index] == pr[i].type_sp[j])
		{
			if (pr[i].type_sp[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = get_index;
		}
	}
	return (pr[i].f);
}

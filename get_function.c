#include "main.h"
/**
 * get_sp_func - selects the correct function to perform the operation.
 * @arg_i: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_sp_func(const char *arg_i, int index))(va_list, char *, unsigned int)
{
	specifier_f sp[] = {
		{"c", print_c}, {"s", print_s}, {NULL, NULL}
	};

	int i = 0, j = 0, first_index;	/*@first_index: first specifier index*/

	first_index = index;
	while (sp[j].format_sp)
	{
		if (arg_i[index] == sp[j].format_sp[i])
		{
			if (sp[j].format_sp[i + 1] != '\0')
				index++, i++;
			else
				break;
		}
		else
		{
			i = 0;
			j++;
			index = first_index;
		}
	}
	return (pr[j].f);
}

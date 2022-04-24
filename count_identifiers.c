#include "main.h"
/**
 * count_sp - returns the amount of identifiers.
 * @arg_i: argument indentifier
 * @index: index of argument identifier.
 *
 * Return: amount of identifiers.
 */
int count_sp(const char *arg_i, int index)
{
	specifier_f sp[] = {
		{"c", print_c}, {"s", print_s},
		{"d", print_i}, {"i", print_i},
		{"b", print_bnr}, {NULL, NULL}
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (sp[j].format_sp)
	{
		if (arg_i[index] == sp[j].format_sp[i])
		{
			if (sp[j].format_sp[i + 1] != '\0')
			{
				index++;
				i++;
			}
			else
			{
				break;
			}
		}
		else
		{
			i = 0;
			j++;
			index = first_index;
		}
	}
	return (i);
}

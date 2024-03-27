#include "main.h"
/**
 * get_formater - Get the appropriate formatter function for the given flag.
 * @flag: The flag character associated with the specifier.
 * @args: The va_list containing the variable arguments.
 * @printed_chars: Pointer to the counter for printed characters.
 */
void get_formater(char flag, va_list args, int *printed_chars)
{
	int i = 0;

	specifer_handler_s structs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
<<<<<<< HEAD
		{'d', print_number},
		{'i', print_number},
=======
>>>>>>> b6de16d3cde6f2ca6884dd6951b1f414d295df05
		{'\0', NULL},
	};
	while (structs[i].flag != '\0')
	{
		if (structs[i].flag == flag)
		{
			structs[i].handle(args, printed_chars);
			return;
		}
		i++;
	}
}

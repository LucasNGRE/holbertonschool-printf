#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct specifier_handler - Structure representing a handler for a specifier.
 * @flag: The flag associated with the specifier.
 * @handle: Pointer to the function that handles the specifier.
 */
typedef struct specifer_handler
{
	char flag;
	void (*handle)(va_list args, int *printed_chars);
} specifer_handler_s;

void get_formater(char flag, va_list args, int *printed_chars);
void print_char(va_list args, int *printed_chars);
void print_string(va_list args, int *printed_chars);
void print_percent (va_list args, int *printed_chars);
int _printf(const char *format, ...);

#endif

#include "main.h"
/**
 * print_char - Imprime un caractère passé en argument.
 * @args: Liste d'arguments contenant le caractère à imprimer.
 * @printed_chars: Pointeur vers le compteur de caractères imprimés.
 *
 * Description : Cette fonction prend en entrée un argument de type `int`
 * à partir de la liste d'arguments `args` et imprime ce caractère sur
 * la sortie standard. Elle incrémente également le compteur de caractères
 * imprimés `printed_chars`.
 */

void print_char(va_list args, int *printed_chars)
{
	char c;
	c = va_arg(args, int);
	putchar(c);
	(*printed_chars)++;
}
/**
 * print_string - Imprime une chaîne de caractères passée en argument.
 * @args: Liste d'arguments contenant la chaîne de caractères à imprimer.
 * @printed_chars: Pointeur vers le compteur de caractères imprimés.
 *
 * Description : Cette fonction prend en entrée un argument de type `char *`
 * à partir de la liste d'arguments `args` et imprime cette chaîne
 * de caractères
 * sur la sortie standard. Si la chaîne est NULL, elle est remplacée
 * par "(null)".
 * Elle incrémente également le compteur de caractères imprimés
 * `printed_chars`.
 */


void print_string(va_list args, int *printed_chars)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		putchar(*str++);
		(*printed_chars)++;
	}
}
/**
 * print_percent - Imprime le caractère % littéral.
 * @printed_chars: Pointeur vers le compteur de caractères imprimés.
 * @args: Unused parameter, required for compatibility with function
 * pointer signature.
 *
 * Description : Cette fonction imprime le caractère % littéral sur la
 * sortie standard. Elle incrémente également le compteur de caractères
 * imprimés `printed_chars`.
 */

void print_percent(va_list args, int *printed_chars)
{
	putchar('%');
	(*printed_chars)++;
	(void) args;
}
/**
 * print_number - converts an int variable to a string and print it
 * @args: list of args
 * @size: size of buffer
*/
void print_number(va_list args, int *size)
{
	long int num = va_arg(args, int);
	long int absolute_num = 0;
	long int temp_num = absolute_num;
	long int digit_index = 1;

	if (num < 0)
	{
		absolute_num = (num * -1);
		putchar('-');
		(*size)++;
	}
	else
		absolute_num = num;

	temp_num = absolute_num;

	while (temp_num > 9)
	{
		temp_num = temp_num / 10;
		digit_index = digit_index * 10;
	}

	while (digit_index >= 1)
	{
		putchar(((absolute_num / digit_index) % 10) + '0');
		digit_index = digit_index / 10;
		(*size)++;
	}
}

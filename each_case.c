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
	putchar(va_arg(args, int));
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
 *
 * Description : Cette fonction imprime le caractère % littéral sur la
 * sortie standard. Elle incrémente également le compteur de caractères
 * imprimés `printed_chars`.
 */

void print_percent(int *printed_chars)
{
	putchar('%');
	(*printed_chars)++;
}



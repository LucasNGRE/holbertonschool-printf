#include "main.h"
/**
 * _printf - Imprime une chaîne de caractères selon un format spécifié.
 * @format: Chaîne de caractères de formatage.
 *
 * Description : Cette fonction reproduit le comportement de la fonction
 * printf standard de la bibliothèque C. Elle prend une chaîne de formatage
 * en entrée, suivie de zéro ou plusieurs arguments, et imprime la chaîne
 * formatée sur la sortie standard.
 *
 * Return: Le nombre de caractères imprimés (en incluant le caractère de
 * terminaison de chaîne nul) ou -1 si une erreur s'est produite.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format != '\0')
			{
				get_formater(*format, args, &printed_chars);
				format++;
			}
			else
			{
				putchar('%');
				printed_chars++;
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}

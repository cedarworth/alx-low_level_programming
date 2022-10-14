#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints all character arguments
 * @c: character to be printed
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to be printed
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to be printed
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%");
}

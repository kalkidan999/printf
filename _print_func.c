#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_c - print char
 * @list: va_list
 * Return: string
 */
int print_c(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
/**
 * print_s - print string
 * @list: va_list
 * Return: string
 */
char *print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		return (s = "(null)");
	return (s);
}

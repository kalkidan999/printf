#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>
/**
 * print_c - print char
 * @list: va_list
 * Return: string
 */
char *print_c(va_list list)
{

	int i;

	i = va_arg(list, int);
	_putchar(i);
	return (1);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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

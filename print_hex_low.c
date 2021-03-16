#include "holberton.h"
/**
 * print_hex_low - print hexadecimal from decimal
 * @list: list
 * Return: pointer to string
 */
char *print_hex_low(va_list list)
{
  unsigned int num = va_arg(list, unsigned int);
	char *output;
	int i = 0;
	int tmp;
int len = _numlen(num);

	output = malloc(sizeof(char) * len + 1);
	if (output == NULL)
	{
		free(output);
		return (0);
	}


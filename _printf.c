#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
va_list args;
int result;
va_start (args, format);
result = vfprintf (stdout, format, args);
va_end (args);
return result;
}

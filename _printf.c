#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
int count;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == 'c')
{
int c = va_arg(args, int);
return (c);
}
else if (*format == 's')
{
int s = va_arg(args, int);
return (s);
}
else if (*format == '%')
{
int p = va_arg(args, int);
return (p);
}
++format;
}
va_end(args);
}

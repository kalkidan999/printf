#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
char *p;
int count;
va_list argp;
va_start(argp, format);
if (format == NULL)
return (-1);
p=format;
for(p=format; *p!='\0';p++)
{
if(*p!='%')
{
count += _putchar(*p);
continue;
}
p++;
}
va_end(argp);
return(count);
}

#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
const char *p;
int count = 0;
va_list argp;
va_start(argp, format);
if (format == NULL)
return (-1);
for(p=format; *p!='\0';p++)
{
while (*p!='%')
{
count += putchar(*p);
p++;
}
p++;
}
va_end(argp);
return(count);
}

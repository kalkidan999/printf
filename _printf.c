#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
const char *p;
int count;
va_list argp;
va_start(argp, format);
if (format == NULL)
return (-1);
for(p=format; *p!='\0';p++)
{
if(*p!='%')
{
count += _putchar(*p);
continue;
}
p++;
switch(*p)
{
case 'c' : 
    i=va_arg(argp,int);
    putchar(i);
    break;
case 'd' : 
    i=va_arg(argp,int);
putchar('d');
    break;
case '%':
    putchar('%');
    break;
}
}
va_end(argp);
return(count);
}

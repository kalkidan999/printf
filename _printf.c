#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
const char *p;
int count =0;
va_list argp;
va_start(argp, format);
p=format;
for(p=format; *p!='\0';p++)
{
if(*p!='%')
{
count += putchar(*p);
	continue;
}
p++;
switch(*p)
{
case '%': 
count += putchar('%');
case 'c' :
i=va_arg(argp,int);
count += putchar(i);
break;
case 's':
s=va_arg(argp,char *); 
count += puts(s);
break;
}
}
va_end(argp);
return(count);
}

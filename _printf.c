#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _printf(const char *format, ...)
{
const char *p;
int i;
unsigned u;
char *s;
int count =0;
va_list argp;
va_start(argp, format);
p=frmt;
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
break;
}
}
va_end(argp);
return(count);
}

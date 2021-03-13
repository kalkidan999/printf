#include "holberton.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 */
int _strlen(char *s)
{
int count;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

int _printf(const char *format, ...)
{
const char *p;
int count =0;
int i;
char *s;
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
break;
case 'c' :
i=va_arg(argp,int);
count += putchar(i);
break;
case 's':
s=va_arg(argp,char *); 
count += puts(s);
break;
case 'd':
i = va_arg(argp,int);
if( i > 9 )
      { 
	int a = i / 10;
        i -= 10 * a;
        _printf(a);
      }
   count += putchar('0'+i);

break;
}
}
va_end(argp);
return(count);
}

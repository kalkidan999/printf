#ifndef H_PRINTF
#define H_PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
int parser(const char *format, test_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
#endif

#ifndef _PRINTF
#define _PRINTF
/* libraries */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/* this struct calls functions */
typedef struct print_format
{
  char *lett;
  int (*f)(va_list ptr);
} pf;

/* fuctions to _printf */
int _putchar(char c);
int _printf(const char *format, ...);
int print_s(va_list ptr);
#endif

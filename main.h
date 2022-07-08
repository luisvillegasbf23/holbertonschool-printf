#ifndef _PRINTF
#define _PRINTF
/* libraries */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <math.h>
/**
* struct print_format - this struct calls functions
* @lett: format to print
* @f: call function
*/
typedef struct print_format
{
char *lett;
int (*f)(va_list ptr);
} pf;

/* fuctions to _printf */
int _putchar(char c);
int _printf(const char *format, ...);
int print_s(va_list ptr);
int print_c(va_list ptr);
int print_percent(va_list ptr);
int print_num(va_list ptr);
#endif

#include "main.h"
#include <stddef.h>
/**
* _printf -
* @format:
* Return: lenght of format
*/

int _printf(const char *format, ...)
{
	int lenstr;
	va_list ptr;
	
	va_start(ptr, format);
	while (format != NULL && format[i] != '\0')
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
					// print a character
					break;
				case 's':
					// print a string
					break;
				case 'd':
					// print decimal
					break;
				case 'i':
					// print integer
					break;
			}
		}

	lenstr = printstring(format);
	return (lenstr);
}

/**
* printstring -
* @str:
* Return:
*/
int printstring(const char *str)
{
	int i = 0;
	
	while (str != NULL && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 1);
}

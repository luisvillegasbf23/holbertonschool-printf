#include "main.h"
/**
* _printf -
* @format:
* Return: lenght of format
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list ptr;

	pf data[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
	};

	while (formart != NULL && format[i])
	{
		if (fotmat[i] == '%')
		{
			while ()
		}
		_putchar(format[i]);
		i++;
	}
	return ();
}


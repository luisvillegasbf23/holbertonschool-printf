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
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			while (data[j].lett)
			{
				if (data[j].lett[0] == format[i + 1])
					(data[j].f)(ptr);
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ptr);
	return (0);
}


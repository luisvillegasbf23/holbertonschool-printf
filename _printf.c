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
		if (format[i] == '%')
		{
			while (data[j].lett)
			{
				if (data[j].lett == format[i + 1])
					data[j].f;
				j++;
			}
		}
		_putchar(format[i]);
		i++;
	}
	return (0);
}


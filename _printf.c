#include "main.h"
/**
* _printf - prints format
* @format: variadic function
* Return: lenght of format
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	va_list ptr;

	pf data[] = {
		{"s", print_s},
		{"c", print_c},
		{"%", print_percent},
		{NULL, NULL},
	};

	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			j = 0; /* set to 0 before search for a lett*/
			while (data[j].lett)
			{
				if (data[j].lett[0] == format[i + 1])
				{
					count += (data[j].f)(ptr);
					break;
				}
				j++;
			}
			i++; /* add 1 to i, to not print lett*/
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ptr);
	return (count - 1);
}


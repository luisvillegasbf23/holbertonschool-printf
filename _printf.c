#include "main.h"
/**
* _printf - prints format
* @format: variadic function
* Return: lenght of format
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0, flag = 0;
	va_list ptr;

	pf data[] = {{"s", print_s}, {"c", print_c}, {"%", print_percent},
		{"d", print_num}, {"i", print_num}, {NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;/* set to 0 before search for a lett*/
			while (data[j].lett)
			{
				if (data[j].lett[0] == format[i + 1])
				{
					count += (data[j].f)(ptr);
					flag = 1;
					break;
				}
				j++;
			}
			if (flag)
			{
				i++; /* add 1 to i, to not print lett*/
				flag = 0;
			}
			else
			{
				_putchar('%');
				count += 1;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ptr);
	return (count);
}


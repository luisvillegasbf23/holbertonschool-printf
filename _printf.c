#include "main.h"

/**
* get_function - get the function
* @c: format
* @ptr: va list name
* Return: int
*/
int get_function(char c, va_list ptr)
{
	int j = 0; /* set to 0 before search for a lett*/

	pf data[] = {
		{"s", print_s},
		{"c", print_c},
		{"%", print_percent},
		{NULL, NULL},
	};

	while (data[j].lett)
	{
		if (data[j].lett[0] == c)
		{
			return ((data[j].f)(ptr));
		}
		j++;
	}
	return (0);
}

/**
* _printf - prints format
* @format: variadic function
* Return: lenght of format
*/

int _printf(const char *format, ...)
{
	int i = 0, count = 0, flag = 0, aux_count = 0;
	va_list ptr;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			aux_count = count;
			count += get_function(format[i + 1], ptr);
			if (count != aux_count || aux_count == (count - 1))
				flag = 1;
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


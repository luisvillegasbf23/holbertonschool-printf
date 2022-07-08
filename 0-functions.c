#include "main.h"
/* contains all functions to use */

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_s - this function print strings
* @ptr: va_list name
* Return: Always 0
*/
int print_s(va_list ptr)
{
	int i = 0;
	char *str = va_arg(ptr, char *);

	if (!str)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	else
	{
		while (str != NULL && str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

/**
* print_c - this function print characters
* @ptr: va list name
* Return: ALways 0
*/
int print_c(va_list ptr)
{
	char c = va_arg(ptr, int);

	_putchar(c);
	return (1);
}
/**
* print_percent - this function print a percent
* @ptr: va list name
* Return: ALways 0
*/
int print_percent(__attribute__((unused)) va_list ptr)
{
	_putchar('%');
	return (1);
}

/**
* print_d
* @ptr:
* Return: int
*/
int print_num(va_list ptr)
{
	int num = va_arg(ptr, int);
	int i = 0, count = 0;
	char str[30];
	if (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		count += 1;
		return(count);
	}
	sprintf(str, "%d", num); /* convert num into string*/
	while (str != NULL && str[i])
	{
		 _putchar(str[i]);
		i++;
		count++;
	}
	str[i] = '\0'; /* add null value to the last position*/
	return (count);
}

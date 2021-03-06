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
* print_num - print int and decimal
* @ptr: arg
* Return: int
*/
int print_num(va_list ptr)
{
	int num = va_arg(ptr, int);
	int count = 0;
	unsigned int numcpy, numprint, d;
	double i = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		numcpy = num * (-1);
		_putchar('-');
		count++;
	}
	else
	{
		numcpy = num;
	}
	while (i <= numcpy)
	{
		i = i * 10;
	}
	d = i / 10;
	while (d >= 1)
	{
		numprint = numcpy / d;
		_putchar(numprint + 48);
		numcpy = (numcpy - (d * numprint));
		d = d / 10;
		count++;
	}
	return (count);
}

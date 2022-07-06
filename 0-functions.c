-Wall -Werror -Wextra -pedantic -std=gnu89 *.cinclude "main.h"
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

	while (str != NULL && str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 1);
}

/**
* print_c - this function print characters
* @ptr: va list name
* Return: ALways 0
*/
int print_c(va_list ptr)
{
	char c = va_arg(ptr, int);
	int n = 1;

	_putchar(c);
	return (n);
}
/**
* print_percent - this function print a percent
* @ptr: va list name
* Return: ALways 0
*/
int print_percent(va_list ptr)
{
	char per = va_arg(ptr, int);
	int a = 1;
	_putchar(per);
	return (a);
}

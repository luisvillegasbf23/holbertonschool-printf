#include "main.h"
/* contains all functions to use */

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_string - this function print strings
* @str:
* Return:
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
	return (0);
}

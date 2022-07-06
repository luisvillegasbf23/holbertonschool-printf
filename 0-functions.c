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
int print_string(const char *str)
{
	int i = 0;

	while (str != NULL && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 1);
}

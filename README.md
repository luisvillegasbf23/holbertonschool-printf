# My Own Printf
Many programming languages implement a printf function (print formatted), to display a formatted string. This one, originally from the C programming language (If you don't know what we are talking about here is the man printf(3).

In the following project we were recreating our own printf and only took as a case the most used formats (mentioned in the man).

## REQUIREMENTS
 - Have a text editor
 - Clone repository in your console.
 - C language compiler gcc.

## FLOWCHART
![Flowchart](https://user-images.githubusercontent.com/105667854/178328804-5365926c-510c-45a5-8673-d365b2f74d9c.png)


# man _printf

## Name
	_printf - formatted output conversion

## SYNOPSIS

	int _printf(const char *format, ...);

## Description

The _printf (print formatted) function prints on the screen a string replacing special marks acording to format.

**Why _prinft is a special function?**
Because it can receive a variable number of parameters, the first parameter being fixed and is the format string. It includes text and marks to be replaced by expressions obtained from the additional parameters.

It must be called with as many parameters as there are marks in the string:

	_printf ("The value is %d\n", argument);
*The symbol "%" denotes the beginning of the formatting mark, the following letter (d) will be exchanged for the format that we pass as an argument and finally a line break (\n).*

If several marks appear, they will be interchanged in the same order in which the arguments appear:

	_printf ("The value is %d other is %s\\n", argument1, argument2);
If a special mark is not passed, printf will print only the text inside it, and if the value is null, it will print nothing.

|Type|Description  |
|--|--|
|%c|Prints character|
|%s|Prints string|
|%%|Prints percentage (%)|
|%d|Prints decimal|
|%i|Prints integer|

## Return Value
Upon successful return, returns string length of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

## Example

	#include "main.h" /* this is our library*/
	int main (void)
	{ 
		int num = 12;
		char *string = "hello";
		
		_printf("i say %s\n", string);
		_printf("my age is %d\n", num);
		return (0);
	}
The following output is printed:

	$ i say hello 
	$ my age is 12

## Authors
Luisvillegasbf23 TotiFlame

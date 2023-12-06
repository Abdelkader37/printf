#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
* _puts - Format and print based on the format specifier.
* @specifier: The format specifier character.
* @args: The variable argument list.
*
* Description:
* This function takes a format specifier and a variable argument list
* and performs the corresponding action based on the specifier.
*
* Return: sum
* The total number of characters processed or written.
*/
int _puts(char specifier, va_list args)
{
	int sum = 0;

	switch (specifier)
{
	case '%':
		sum = write(1, "%", 1);
	break;

	case 'c':
		sum = print_char(va_arg(args, int));
	break;

	case 's':
		sum = print_str(va_arg(args, char*));
	break;

	case 'd':
	case 'i':
		sum = print_int(va_arg(args, int));
	break;

	case 'o':
		sum = print_o(va_arg(args, unsigned int));
	break;

	case 'u':
		sum = print_u(va_arg(args, unsigned int));
}
	return (sum);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - A function that prints output according to a format using write.
 * @format: The format string.
 *
 * Return: The total number of characters processed or written.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
	{
		format++;
		len += _puts(*format, args);
	}
	else
	{
		len += write(1, format, 1);
	}
		format++;
}

	va_end(args);

	return (len);
}

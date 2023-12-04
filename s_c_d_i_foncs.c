#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - Prints a single character to the standard output.
 * @ch: The character to be printed.
 *
 * Description: it takes a char as input and prints it to the std out
 *
 * Return: The number of characters printed (1 for success, 0 for failure).
 */
int print_char(int ch)
{
	int count;

	count = write(1, &ch, 1);
	return (count);
}



/**
 * print_int - Prints an integer to the standard output.
 * @num: The integer to be printed.
 *
 * Description:ctakes an int as input and prints the absolute value of it
 *
 * Return: The number of characters printed
 */
int print_int(int num)
{
	int count = 0;
	int temp = num;
	int num_digits = 1;
	char buffer[20];
	int i;
	int temp_copy;


	if (num < 0)
	{
		count += write(1, "-", 1);
		temp = -num;
	}

	temp_copy = temp;

	while (temp_copy >= 10)
	{
		temp_copy /= 10;
		num_digits++;
	}


	for (i = num_digits - 1; i >= 0; i--)
	{
		buffer[i] = '0' + temp % 10;
		temp /= 10;
	}

		count += write(1, buffer, num_digits);

	return (count);
}

/**
 * print_str - Prints a string character by character to the standard output.
 * @str: The input string to be printed.
 *
 * Description: iterates through each character string and prints it
 *
 * Return: The length of the input string.
 */

int print_str(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		write(1, str++, 1);
		len++;
	}

	return (len);
}

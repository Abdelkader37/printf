#include <main.h>
/**
 * print_char - Prints a single character to the standard output.
 * @ch: The character to be printed.
 *
 * Description:
 * This function takes a character as input and prints it to the standard output
 * using the write function. It returns the number of characters printed.
 *
 * Returns:
 * The number of characters printed (1 for success, 0 for failure).
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
 * Description:
 * This function takes an integer as input, handles negative values by
 * printing a minus sign ('-'), and then prints the absolute value of the
 * integer digit by digit to the standard output. It returns the number of
 * characters printed.
 *
 * Returns:
 * The number of characters printed (including '-' for negative numbers).
 */
int print_int(int num)
{
	int count = 0;
	int temp = num;

	if (num < 0)
	{
		count += write(1, "-", 1);
		temp = -num;
	}

	int num_digits = 1;
	int temp_copy = temp;
	while (temp_copy >= 10)
	{
		temp_copy /= 10;
		num_digits++;
	}

char buffer[20];
	for (int i = num_digits - 1; i >= 0; i--)
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
 * Description:
 * This function iterates through each character of the input string and prints
 * it to the standard output using the write function. It also calculates and
 * returns the length of the string without using the strlen function.
 *
 * Returns:
 * The length of the input string.
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

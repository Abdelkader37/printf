#include <main.h>
/**
* _puts - Format and print based on the format specifier.
* @specifier The format specifier character.
* @args The variable argument list.
*
* Description:
* This function takes a format specifier and a variable argument list
* and performs the corresponding action based on the specifier.
*
* Returns:
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
		sum = print_str(va_arg(args, char* ));
	break;
	case 'd':
	case 'i':
		sum = print_int(va_arg(args, int), 10);

    }
    return sum;
}

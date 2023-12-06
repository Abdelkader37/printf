                                Custom Printf Function
Description:
  This project implements a simplified version of the printf function in C. The custom printf function, _printf, allows users to format and print output based on format specifiers.
 did by QRAFI ABDELKADER AND MOHAMED  Bouaafia
Features:
Supports %c for characters.
Supports %s for strings.
Supports %d and %i for integers.
Handles negative integers and prints them correctly.
Supports %u for unsigned integers.
Supports %o for unsigned octal integers.
Handles the % character.

Function Signature:
int _printf(const char *format, ...);

Example Usage:
int main(void) {
    int len;

    len = _printf("Hello, %s! This is a number: %d\n", "User", 42);

    return 0;
}

Format Specifiers
The following format specifiers are supported:

%c: Character
%s: String
%d or %i: Integer
%u: Unsigned Integer
%o: Unsigned Octal Integer
%%: Percent character






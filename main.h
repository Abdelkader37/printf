#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _puts(char specifier, va_list args);
int _printf(const char *format, ...);
int print_int(int num);
int print_str(const char *str);
int print_char(int ch);



#endif /* MAIN_H */

#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int _putchar(char c);

/**
 *struct operations - a struct to save the format of the characters
 *@fr: the character who will define the function to use
 *@func: a pointer to the specific print function
 */
typedef struct operations
{
	char fr;
	int (*func)(va_list a);
} ope;

int _printf(const char *format, ...);
int printc(va_list);
int prints(va_list);
int printmod(va_list);
int auxlist(char x, va_list list);
char *converter(int num, int base);
int printd(va_list);

#endif

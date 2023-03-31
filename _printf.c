#include "main.h"
/**
 * _printf - works like printf function
 * @format: the thing we want to print
 * Return: the number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count = auxlist(format[i + 1])(list);
		}
		i++;
	}
	va_end(list);
	return (count);
}

/**
 * auxlist - calls the struct
 * @x: character inside the va_list
 * Return: an int
 */
int (*auxlist(char x))(va_list list)
{
	int j = 0;
	ope op[] = {
	{'c', printc},
	{'s', prints},
	{'%', printmod},
	{0, NULL},
	};

	while (op[j].fr != 0)
	{
		if (op[j].fr == x)
		{
			return (op[j].func(list));
		}
		j++;
	}

}

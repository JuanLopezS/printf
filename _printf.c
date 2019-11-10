#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Pointer
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list print;
	int count = 0;

	MyPrint ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_integer},
		{"r", op_reverse},
		{"R", op_rot13},
		{"b", op_binary},
	};

	if (format == NULL)
		return (-1);
	va_start(print, format);

	count = validator(format, print, ops);
	va_end(print);
	return (count);
}

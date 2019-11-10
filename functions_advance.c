#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * op_rot13 - Print Integer
 * @form: name va_list.
 *
 * Return: Nothing.
 */

int op_rot13(va_list form)
{
	int lenght = 0;
	int i, j;
	char *s = va_arg(form, char *);

	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 53; j++)
		{
			if (s[i] == x[j])
			{
				lenght += _putchar(y[j]);
				break;
			}
			if (j == 53)
			{
				lenght += _putchar(s[i]);
			}
		}

	}
	return (lenght);
}

/**
 * print_binary - Function that prints the binary representation of a number.
 * Prototype: void print_binary(unsigned long int n);
 * @n: number to convert to binary
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
int op_binary(va_list form)
{
	int count = 0;
	unsigned int num = va_arg(form, unsigned int);
	int arr[sizeof(unsigned int) * 8 + 1];
	int i = 0;

	if (num == 0)
		return (_putchar('0'));
	while (num > 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		count++;
		i--;
	}
	return (count);
}

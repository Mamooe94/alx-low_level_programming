#include "main.h"
/**
 * _puts - this is used to print a string, followed by new line
 *@str: string
 *Return: length of string
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(str++);
	}
		_putchar('\n');
}

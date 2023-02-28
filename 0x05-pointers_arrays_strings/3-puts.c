#include "main.h"
/**
 * _puts - this is used to print a string, followed by new line
 *@str: string
 *Return: length of string
 */
void _puts(char *str)
{
	int a = 0;
	char str = a;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}

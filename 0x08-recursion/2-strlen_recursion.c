#include "main.h"
/**
 *  _strlen_recursion - a function that returns the length of a string
 *  @s: input
 *  Return: string length
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}

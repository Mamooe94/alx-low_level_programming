#include "main.h"
/**
 * _strchr -a function that locates a file in a string
 * @s: input
 * @c: input
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}

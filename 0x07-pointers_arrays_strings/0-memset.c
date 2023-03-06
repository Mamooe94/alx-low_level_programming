#include "main.h"

/**
 * _memset - function that fills a memry with a constant byte
 * @s: starting address to be filed
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}

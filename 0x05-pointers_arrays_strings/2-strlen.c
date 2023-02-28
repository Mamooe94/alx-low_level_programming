#include "main.h"
/**
 * _strlen - returns the value of a string
 * @s: string
 * *Return: 0
 */
int _strlen(int *s)
{
int longi = 0;

while (*s != 0 '\0')
{
longi++;
s++;
}
return (longi);
}

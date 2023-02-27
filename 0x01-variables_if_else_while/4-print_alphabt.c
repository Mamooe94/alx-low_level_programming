#include <stdio.h>
/**
 * main - prints alphabets in lower case using putchar except e and q
 * Return: 0 (success)
 */
int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'e' && lc != 'q')
putchar(lc);
}
putchar('\n');
return (0);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - more of loops here
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	{
	printf("Last digit of %d is %d ", n, t);
	}
	if (t > 5)
	{
	printf(" and is greater than 0");
	}
	if (t == 0)
	{
	printf(" and is 0", n, t);
	}
	if (t < 6 && t != 0)
	{
	printf(" and is less than 6 and not 0", n, t);
	}
	if else
	{
	printf("\n");
	}
	return (0);
}

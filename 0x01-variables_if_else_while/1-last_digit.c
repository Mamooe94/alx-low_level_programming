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

	if (t > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, t);
	if (t == 5)
	printf(" and is 0\n", n, t);
	if (t < 6 && t != 0)
	printf(" and is less than 6 and not 0\n", n, t);
	return (0);
}

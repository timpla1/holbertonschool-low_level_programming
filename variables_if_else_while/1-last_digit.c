#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char knee[] = "Last digit of";
	char he[] = "and is less than 6 and not 0";
	char E[] = "and is greater than 5";
	char I[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%s %d is", knee, n);

	if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf(" %d %s\n", (n % 10), he);
	}
	if ((n % 10) > 5)
	{
	printf(" %d %s\n", (n % 10), E);
	}
	if ((n % 10) == 0)
	{
	printf(" %d %s\n", (n % 10), I);
	}

	return (0);
}

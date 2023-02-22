#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: always 0
**/

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = (n % 10);
	printf("last digit of %i is %i ", n, last);
	if (last == 0)
	printf("and is 0\n");
	else if (n > 5)
	printf("and is greater than 5\n");
	else
	printf("and is less than 6 and not 0\n");
	return (0);
}

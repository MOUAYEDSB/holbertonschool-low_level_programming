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
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last = (n % 10);
	printf("Last digit of %i is %i ", n, Last);
	if (Last == 0)
	printf("and is 0\n");
	else if (Last > 5)
	printf("and is greater than 5\n");
	else
	printf("and is less than 6 and not 0\n");
	return (0);
}

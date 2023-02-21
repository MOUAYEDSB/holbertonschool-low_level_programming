#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * * main - Entry point
 * *
 * * Return: always 0
 * **/

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			 	if (n == 0)
					printf("%i and is 0", n);
				else if (n > 5)
					printf("%i and is greater than 5", n);
				else        
					printf("%i and is less than 6 and not 0", n);
				return (0);
}

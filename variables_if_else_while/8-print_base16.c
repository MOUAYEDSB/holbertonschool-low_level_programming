#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char  m;
	char  o;

	for (m = '0' ; m <= '9' ; m++)
	putchar(m);
	for (o = 'a' ; o <= 'f' ; o++)
	putchar(o);
	putchar('\n');

	return (0);
}

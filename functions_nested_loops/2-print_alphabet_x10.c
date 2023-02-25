#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Defaut value
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 10 ; a <= 19; a++)
		{
		for (b = 97; b <= 122 ; b++)
			_putchar(b);
		_putchar('\n');
		}
}

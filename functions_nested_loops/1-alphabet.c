#include "main.h"

/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		{
		_putchar (alpha);
		}
	_putchar ('\n');
}

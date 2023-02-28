#include "main.h"

/**
*_abs - calculates the absolute value of an integer
*@n: the integer to calculate the absolute value of
*Return: absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

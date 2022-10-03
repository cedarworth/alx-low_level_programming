#include "main.h"

/**
 * factorial - returns the value of a given number
 * @n: is the number to be used
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	int n_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n_factorial = factorial(n - 1);
	return (n * n_factorial);
}

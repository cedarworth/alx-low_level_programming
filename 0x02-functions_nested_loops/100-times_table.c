#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{	
		printf(NULL);
	}
	else
	{
		printf("%d", n++);
	}
_putchar("\n");
}

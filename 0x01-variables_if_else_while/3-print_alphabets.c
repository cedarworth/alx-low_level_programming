#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char ch;
char chUp;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (chUp = 'A' ; chUp <= 'Z'; chUp++);
{
	putchar(chUp);
}
}
putchar('\n');
return (0);
}

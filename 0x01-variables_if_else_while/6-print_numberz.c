#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		/*convert n to ASCII representation*/
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}

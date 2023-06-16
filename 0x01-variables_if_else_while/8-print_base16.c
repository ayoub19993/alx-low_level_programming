#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48; /*48; decimal rep of 0*/

	while (n <= 102) /*102; decimal rep of f*/
	{
		putchar(n);

		/*after 9 we jump till 96; '*/
		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: write a program that prints all possible
 * different combinations of two figits
 * Return: 0
 */
int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (b != a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}

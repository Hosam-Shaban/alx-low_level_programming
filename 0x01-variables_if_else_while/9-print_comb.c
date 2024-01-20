#include <stdio.h>

/**
 *main - Entery point
 *
 * Description: C program for combination of numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	while (number <= 9)
	{
		putchar(number + 48);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}
	putchar('\n');

	return (0);
}

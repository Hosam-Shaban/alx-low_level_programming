#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphapet generator
 *
 * Return: 0
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}

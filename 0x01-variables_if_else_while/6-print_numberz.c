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
		/*convert number to ASCII code*/
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}

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
	char ch = 'a';
	char CH = 'A';

	/*lower case*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*upper case*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

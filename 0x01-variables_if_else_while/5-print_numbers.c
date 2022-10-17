#include <stdio.h>

/**
 * main - Entry point
 * Retrun: 0 no error, non zero if error
*/
int main(void)
{
	char i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

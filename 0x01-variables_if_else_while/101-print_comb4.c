#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{

	int d, p, q;
	for (d ='0'; d < '9'; d++)
	{

	for (q = p + 1; q <= '0'; p++)
	{ 
	for (p = p + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{ 
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
